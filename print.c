#include "main.h"

/**
 * _printf - function that produces
 * output according to a given format
 * @format: format, which is a string character
 * Return: the number of printed characters,excluding
 * the null byte used to end output to sting
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *p = (char *)format;
	int sum = 0;

	va_start(ap, format);
	while (*p != '\0')
	{
		if (*p != '%')
		{
			_putchar(*p);
			sum += 1;
		}
		else
		{
			sum += loop(ap, p);
			p++;
		}
		p++;
	}
	va_end(ap);
	return (sum);
}

/**
 * loop - loop function
 * @ap: va-list variables
 * @p: The character pointer variables
 *
 * Return: the number of characters printed
 */
int loop(va_list ap, char *p)
{
	print_t cases[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_digit},
		{'\0', NULL}
	};
	int count = 0, i = 0;

	if (*(p + 1) == '%')
	{
		_putchar('%');
		count++;
		return (1);
	}
	while (cases[i].s != '\0')
	{
		if (cases[i].s == *(p + 1))
		{
			count += cases[i].func(ap);
			break;
		}
		i++;
	}
	if (cases[i].s == '\0')
	{
		_putchar('%');
		_putchar(*(p + 1));
		count += 2;
	}
	return (count);
}
