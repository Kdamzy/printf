#include "main.h"
#include <unistd.h>
#include <stdarg.h>

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
	int character = va_arg(ap, int);

	return (_putchar(character));
}


/**
 * print_string - printsa  string of characters.
 * @ap: A variable argument list containing the string to be printed.
 *
 * Description: This function prints each character in the string
 * using the _putchar function
 *
 * Return: The number of characters printed
 *
 */


int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_digit - prints an integer digit.
 *
 * @ap: A variable argument list containing
 * the integer to be printed.
 *
 * Description: This function takes an integer as a variable
 * argument and prints it using the 'put_int' function.
 *
 * Return: The number of characters printed by 'put_int'.
 *
 */


int print_digit(va_list ap)
{
	int num = va_arg(ap, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += put_int(num);
	return (count);
}

/**
 * put_int - Prints an integer to the standard output
 * @x: The integer to be printed
 *
 * Return: The number of characters printed
 */
int put_int(int x)
{
	int count = 0;

	if (x != 0)
	{
		count += put_int(x / 10);
		_putchar('0' + (x % 10));
	}
	return (count);
}

/**
 * print_percent - prints a percent character (%).
 * @ap: A variable argument list (not used).
 *
 * Return: The number of characters printed (always 1).
 */
int print_percent(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}
