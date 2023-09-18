#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stddef.h>

typedef struct print_t
{
	char s;
	int (*func)(va_list ap);
}print_t;

int _printf(const char *format, ...);
int _putchar(char c);
typedef int (*func_t)(va_list);
int loop(va_list ap, char *pp);
int put_int(int x);
int print_string(va_list ap);
int print_char(va_list ap);
int print_digit(va_list ap);

#endif
