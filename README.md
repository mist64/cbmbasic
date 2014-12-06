# cbmbasic - Commodore BASIC V2 as a scripting language

"Commodore BASIC" (cbmbasic) is a 100% compatible version of Commodore's version of Microsoft BASIC 6502 as found on the Commodore 64. You can use it in interactive mode or pass a BASIC file as a command line parameter.

This source does not emulate 6502 code; all code is completely native. On a 1 GHz CPU you get about 1000x speed compared to a 1 MHz 6502.

## Compatibility

It has been tested with

* Mac OS X 10.4/10.5 i386/x86_64/ppc (GCC 3.3/4.0)
* Debian Linux Etch (GCC 3.3/4.1)
* Windows NT (Visual Studio 2005/2008)

Other CPUs, operating systems and compilers should work, too.

Windows users should also install the [Microsoft Visual C++ 2005 SP1 Redistributable Package (x86)]("http://www.microsoft.com/downloads/details.aspx?familyid=200b2fd9-ae1a-4a14-984d-389c36f85647&displaylang=en").

## Usage
You can use cbmbasic in interactive mode by just running the binary without parameters, or you can specify an ASCII-encoded BASIC program on the command line. You can also use cbmbasic as a UNIX scripting language by adding a hashbang line to your BASIC program and making it executable.

    $ ls -l hello.bas 
    -rwxr-xr-x  1 mist  staff  40  7 Apr 21:30 hello.bas
    $ cat hello.bas 
    #!/usr/bin/cbmbasic
    PRINT"HELLO WORLD!"
    $ ./hello.bas 
    HELLO WORLD!

cbmbasic implements a small plugin system that lets developers add additional statements, functions etc. Right now, you can turn this on with "SYS 1" (turn off with "SYS 0"), and use the new statements LOCATE *y*, *x* (set cursor position), SYSTEM *string* (run command line command) and the extended WAIT *port*, *mask*, which implements the [Bill Gates easter egg](http://www.pagetable.com/?p=43).

## Internals
The core of the BASIC interpreter is in the file `cbmbasic.c`, which is platform, endianness and bitness independent. For all I/O, it calls out into `runtime.c`, so it should be possible to adapt this project for any OS by just changing `runtime.c`.

All function calls that the core interpreter can't handle end up in kernal_dispatch() in `runtime.c`, where a switch statement dispatches these to C functions. For Commodore BASIC, `runtime.c` has to support several Commodore KERNAL library routines. Some of them are very important (CHRIN, CHROUT) and some are only used for certain BASIC statements (LOAD, SAVE, OPEN, SETTIM). `runtime.c` does not implement all functions yet.

## License
Feel free to use this project for any purpose, give credit if you like, and send back improvements to the authors, if you like, so that others can benefit from it. See source for license details.

## Contact
[Michael Steil](mailto:mist@c64.org), [James Abbatiello](mailto:abbeyj@gmail.com)
