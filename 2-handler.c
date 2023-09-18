#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_binary - prints a binary representation of an integer
 * @ap: A variable argument list
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	count += put_binary(num);
	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 * @ap: A variable argument list
 *
 * Return: The number of characters printed.
 */
int print_unsign(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	count += put_unsign(num);
	return (count);
}

/**
 * print_octal - prints an integer in octal format
 * @ap: A variable argument list
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	count += put_octal(num);
	return (count);
}

/**
 * print_hex - prints an integer in hexadecimal format
 * @ap: A variable argument list
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	count += put_hex(num, 0);
	return (count);
}

/**
 * print_hex_upper - prints an integer in uppercase hexadecimal format
 * @ap: A variable argument list
 *
 * Return: The number of characters printed.
 */
int print_hex_upper(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	count += put_hex(num, 1);
	return (count);
}
