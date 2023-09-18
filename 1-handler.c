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

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
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
	return (put_int(num));
}
