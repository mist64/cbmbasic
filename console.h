#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED

void clear_screen();
void up_cursor();
void down_cursor();
void left_cursor();
void right_cursor();
void move_cursor(int x, int y);
void get_cursor(int* x, int* y);

#endif /* CONSOLE_H_INCLUDED */
