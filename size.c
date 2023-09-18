#include "main.h"

/**
 * get_size - print the size of the argument
 * @format: Formatted string to print the arguments
 * @a: arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *a)
{
	int kade = *a + 1;
	int size = 0;

	if (format[kade] == 'l')
		size = S_LONG;
	else if (format[kade] == 'h')
		size = S_SHORT;

	if (size == 0)
		*a = kade - 1;
	else
		*a = kade;

	return (size);
}
