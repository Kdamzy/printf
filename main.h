#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

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
int print_percent(va_list ap);
int print_hex_upper(va_list ap);
int print_hex(va_list ap);
int print_octal(va_list ap);
int print_unsign(va_list ap);
int print_binary(va_list ap);

#endif
