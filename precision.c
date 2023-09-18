#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 *
 * @format: Formatted string in which to print the arguments
 *
 * @a: List of arguments to be printed.
 *
 * @list: list of arguments.
 *
 * Return: Precision.
 */


int get_precision(const char *format, int *a, va_list list)
{
	int kade = *a + 1;
	int precision = -1;

	if (format[kade] != '.')
		return (precision);

	precision = 0;

	for (kade += 1; format[kade] != '\0'; kade++)
	{
		if (is_digit(format[kade]))
		{
			precision *= 10;
			precision += format[kade] - '0';
		}
		else if (format[kade] == '*')
		{
			kade++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*a = kade - 1;

	return (precision);
}
