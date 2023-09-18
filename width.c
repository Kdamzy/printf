#include "main.h"

/**
 * get_width - print width
 * @format: Formatted string to print the arguments.
 * @a: arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *a, va_list list)
{
	int kade;
	int width = 0;

	for (kade = *a + 1; format[kade] != '\0'; kade++)
	{
		if (is_digit(format[kade]))
		{
			width *= 10;
			width += format[kade] - '0';
		}
		else if (format[kade] == '*')
		{
			kade++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*a = kade - 1;

	return (width);
}
