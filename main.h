#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stddef.h>


int _printf(const char *format, ...);
int _putchar(char c);
typedef int (*func_t)(va_list);
int loop(va_list args, char *pp);
int put_int(int x);
int print_string(va_list args);
int print_char(va_list args);
int print_digit(va_list args);

#endif
