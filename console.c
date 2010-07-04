#include "console.h"

#include <stdlib.h>
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>

static int get_console_info(HANDLE *h, COORD *pos, DWORD *size) {
    CONSOLE_SCREEN_BUFFER_INFO info;

    *h = GetStdHandle(STD_OUTPUT_HANDLE);
    if( *h == INVALID_HANDLE_VALUE || GetConsoleScreenBufferInfo(*h, &info) == FALSE )
      return -1;

    *pos = info.dwCursorPosition;
    *size = (DWORD)info.dwSize.X * info.dwSize.Y;
    return 0;
}
#endif /* _WIN32 */

void clear_screen() {
#ifdef _WIN32
  static COORD upper_left = {0, 0};
  COORD dummy1;
  DWORD dummy2, size;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &dummy1, &size)) == -1 )
    return;
  
  FillConsoleOutputCharacter(hstd_out, ' ', size, upper_left, &dummy2);
  SetConsoleCursorPosition(hstd_out, upper_left);
#else /* ANSI */
  fputs("\033[2J\033[;H", stdout);
#endif /* _WIN32 */
}

void up_cursor() {
#ifdef _WIN32
  COORD pos;
  DWORD dummy;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &pos, &dummy)) == -1 )
    return;

  --pos.Y;
  SetConsoleCursorPosition(hstd_out, pos);
#else /* ANSI */
  fputs("\033[A", stdout);
#endif /* _WIN32 */
}

void down_cursor() {
#ifdef _WIN32
  COORD pos;
  DWORD dummy;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &pos, &dummy)) == -1 )
    return;

  ++pos.Y;
  SetConsoleCursorPosition(hstd_out, pos);
#else /* ANSI */
  fputs("\033[B", stdout);
#endif /* _WIN32 */
}

void left_cursor() {
#ifdef _WIN32
  COORD pos;
  DWORD dummy;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &pos, &dummy)) == -1 )
    return;

  --pos.X;
  SetConsoleCursorPosition(hstd_out, pos);
#else /* ANSI */
  fputs("\033[D", stdout);
#endif /* _WIN32 */
}

void right_cursor() {
#ifdef _WIN32
  COORD pos;
  DWORD dummy;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &pos, &dummy)) == -1 )
    return;

  ++pos.X;
  SetConsoleCursorPosition(hstd_out, pos);
#else /* ANSI */
  fputs("\033[C", stdout);
#endif /* _WIN32 */
}

void move_cursor(int x, int y) {
#ifdef _WIN32
  COORD dummy1;
  DWORD dummy2;
  HANDLE hstd_out;
  const COORD pos = {x-1, y-1};

    if( (get_console_info(&hstd_out, &dummy1, &dummy2)) == -1 )
    return;

  SetConsoleCursorPosition(hstd_out, pos);
#else /* ANSI */
  printf("\033[%d;%df", y, x);
#endif /* _WIN32 */
}

void get_cursor(int* x, int* y)
{
#ifdef _WIN32
  COORD pos;
  DWORD dummy;
  HANDLE hstd_out;

  if( (get_console_info(&hstd_out, &pos, &dummy)) == -1 )
  {
      *x = 0;
      *y = 0;
  }
  else
  {
      *x = pos.X;
      *y = pos.Y;
  }
#else /* ANSI */
  /* TODO we always return 0/0 as the cursor position */
  *x = 0;
  *y = 0;
#endif /* _WIN32 */
}

void set_color(int c)
{
#ifdef _WIN32
    HANDLE h;
    CONSOLE_SCREEN_BUFFER_INFO info;
    WORD bg;

    h = GetStdHandle(STD_OUTPUT_HANDLE);
    if( h == INVALID_HANDLE_VALUE || GetConsoleScreenBufferInfo(h, &info) == FALSE )
        return;

    bg = info.wAttributes & (BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    switch (c)
    {
    case COLOR_WHITE:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
        break;

    case COLOR_RED:
        info.wAttributes = bg | FOREGROUND_RED;
        break;

    case COLOR_GREEN:
        info.wAttributes = bg | FOREGROUND_GREEN;
        break;

    case COLOR_BLUE:
        info.wAttributes = bg | FOREGROUND_BLUE;
        break;

    case COLOR_BLACK:
        info.wAttributes = bg;
        break;

    case COLOR_PURPLE:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
        break;

    case COLOR_YELLOW:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        break;

    case COLOR_CYAN:
        info.wAttributes = bg | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        break;

    case COLOR_ORANGE:
        info.wAttributes = bg | FOREGROUND_GREEN | FOREGROUND_BLUE;
        break;

    case COLOR_BROWN:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_GREEN;
        break;

    case COLOR_LTRED:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_INTENSITY;
        break;

    case COLOR_GREY1:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_BLUE;
        break;

    case COLOR_GREY2:
        info.wAttributes = bg | FOREGROUND_INTENSITY;
        break;

    case COLOR_LTGREEN:
        info.wAttributes = bg | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
        break;

    case COLOR_LTBLUE:
        info.wAttributes = bg | FOREGROUND_BLUE | FOREGROUND_INTENSITY;
        break;

    case COLOR_GREY3:
        info.wAttributes = bg | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN;
        break;
    }

    SetConsoleTextAttribute(h, info.wAttributes);

#else /* ANSI */
  /* TODO */
#endif /* _WIN32 */
}
