/*
 * Copyright (c) 2009 Michael Steil
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * This plugin interface makes use of the standard plugin facility built into
 * Commodore BASIC that is used by BASIC extensions such as Simons' BASIC.
 * There are several vectors at 0x0300 in RAM for functions like error printing,
 * tokenizing, de-tokenizing and the interpreter loop. We hook this from C.
 * Since this adds code to the interpreter loop, it is disabled by default,
 * and can be enabled like this:
 *
 * SYS 1
 *
 * It can be disabled with:
 *
 * SYS 0
 *
 * Please note that the current implementation does not tokenize new keywords,
 * but stores them verbatim and compares strings when during execution, which
 * is very bad for performance. Also, there is currently no demo code for
 * added functions.
 */

#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#undef ERROR_FILE_NOT_FOUND    /* avoid conflict with CBM value below */
#endif
#include "plugin.h"
#include "glue.h"
#include "console.h"

static unsigned short
get_chrptr() {
	return RAM[0x7A] | RAM[0x7B]<<8;
}

static void
set_chrptr(unsigned short a) {
	RAM[0x7A] = a & 0xFF;
	RAM[0x7B] = a >> 8;
}

int
compare(const char *s1) {
	const unsigned char *s = (const unsigned char *)s1;
	unsigned short chrptr = get_chrptr();

	while (*s) {
		CHRGET();
		if (A != *s++) {
			set_chrptr(chrptr);
			return 0;
		}
	}
	CHRGET();
	return 1;
}

/*
 * Continuation
 *
 * This will put a magic value onto the stack and run the main
 * function again with another PC value as a start address.
 * When the code returns, it will find the magic value, and
 * the main function will quit, so we end up here again.
 */
static void
call(unsigned short pc) {
	PC = pc;
	PUSH_WORD(MAGIC_CONTINUATION-1);
	main(0,0);
}

static void
check_comma() {
	call(0xAEFD);
}

static unsigned short
get_word() {
	call(0xAD8A);
	call(0xB7F7);
	return RAM[0x14] | (RAM[0x15]<<8);
}

static unsigned char
get_byte() {
	call(0xB79E);
	return X;
}

static void
get_string(char *s) {
	int i;

	call(0xAD9E);
	call(0xB6A3);
	for (i = 0; i < A; i++)
		s[i] = RAM[(X|(Y<<8))+i];
	s[A] = 0;
}

#define ERROR_TOO_MANY_FILES		0x01
#define ERROR_FILE_OPEN			0x02
#define ERROR_FILE_NOT_OPEN		0x03
#define ERROR_FILE_NOT_FOUND		0x04
#define ERROR_DEVICE_NOT_PRESENT	0x05
#define ERROR_NOT_INPUT_FILE		0x06
#define ERROR_NOT_OUTPUT_FILE		0x07
#define ERROR_MISSING_FILE_NAME		0x08
#define ERROR_ILLEGAL_DEVICE_NUMBER	0x09
#define ERROR_NEXT_WITHOUT_FOR		0x0A
#define ERROR_SYNTAX			0x0B
#define ERROR_RETURN_WITHOUT_GOSUB	0x0C
#define ERROR_OUT_OF_DATA		0x0D
#define ERROR_ILLEGAL_QUANTITY		0x0E
#define ERROR_OVERFLOW			0x0F
#define ERROR_OUT_OF_MEMORY		0x10
#define ERROR_UNDEFD_STATMENT		0x11
#define ERROR_BAD_SUBSCRIPT		0x12
#define ERROR_REDIMD_ARRAY		0x13
#define ERROR_DEVISION_BY_ZERO		0x14
#define ERROR_ILLEGAL_DIRECT		0x15
#define ERROR_TYPE_MISMATCH		0x16
#define ERROR_STRING_TOO_LONG		0x17
#define ERROR_FILE_DATA			0x18
#define ERROR_FORMULA_TOO_COMPLEX	0x19
#define ERROR_CANT_CONTINUE		0x1A
#define ERROR_UNDEFD_FUNCTION		0x1B
#define ERROR_VERIFY			0x1C
#define ERROR_LOAD			0x1D
#define ERROR_BREAK			0x1E

static unsigned short
error(unsigned char index) {
	X = index;
	return 0xA437; /* error handler */
}

/*
 * Print BASIC Error Message
 *
 * We could add handling of extra error codes here, or
 * print friendlier strings, or implement "ON ERROR GOTO".
 */
unsigned short
plugin_error() {
	return 0;
}

/*
 * BASIC Warm Start
 *
 * This gets called whenever we are in direct mode.
 */
unsigned short
plugin_main() {
	return 0;
}

/*
 * Tokenize BASIC Text
 */
unsigned short
plugin_crnch() {
	return 0;
}

/*
 * BASIC Text LIST
 */
unsigned short
plugin_qplop() {
	return 0;
}

/*
 * BASIC Char. Dispatch
 *
 * This is used for interpreting statements.
 */
unsigned short
plugin_gone() {
	set_chrptr(get_chrptr()+1);
	for (;;) {
		unsigned short chrptr;
		set_chrptr(get_chrptr()-1);
		chrptr = get_chrptr();
		/*
		 * this example shows:
		 * - how to get a 16 bit integer
		 * - how to get an 8 bit integer
		 * - how to check for a comma delimiter
		 * - how to do error handling
		 */
		if (compare("LOCATE")) {
			unsigned char x,y;
			y = get_byte(); /* 'line' first */
			check_comma();
			x = get_byte(); /* then 'column' */
			/* XXX ignores terminal size */
			if (x>80 || y>25 || x==0 || y==0)
				return error(ERROR_ILLEGAL_QUANTITY);
			move_cursor(x, y);

			continue;
		}
		/*
		 * this example shows:
		 * - how to override existing keywords
		 * - how to hand the instruction to the
		 *   original interpreter if we don't want
		 *   to handle it
		 */
		if (compare("\222")) { /* 0x92 - WAIT */
			unsigned short a;
			unsigned char b;
			a = get_word();
			check_comma();
			b = get_byte();
			if (a==6502) {
				printf("MICROSOFT!");
				continue;
			} else {
				set_chrptr(chrptr);
				return 0;
			}
		}

		/*
		 * this example shows:
		 * - how to deal with new keywords that contain
		 *   existing keywords
		 * - how to parse a string
		 */
		if (compare("\236TEM")) {
			char s[256];

			get_string(s);
			system(s);

			continue;
		}

		if (compare("QUIT")) {
			exit(0);
		}
		break;
	}
	return 0;
}

/*
 * BASIC Token Evaluation
 *
 * This is used for expression evaluation.
 * New functions and operators go here.
 */
unsigned short
plugin_eval() {
	return 0;
}
