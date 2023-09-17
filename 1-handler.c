#include "main.h"

/**
 * print_char - prints an argument based on type
 *
 * print_digit:  Prints an integer digit.
 *
 * print_string: Prints a string of characters.
 *
 * @ap:A variable argument list containing the string to be printed.
 *
 * Return:The number of characters printed.
 *
 */


int print_char(va_list ap)
{       
        return _putchar(va_arg(ap, int));
}

int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	while (*str + count) != '\0')
	{
		_putchar(*str + count));
		count ++;
	}
	return count;
}

int print_digit(va_list ap)
{
	int num = va_arg(ap, int);
	return put_int(num);
}

