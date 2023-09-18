#include "main.h"


/**
 * print_char - Prints a character
 *
 * @types: List a type of argument
 *
 * @buffer: Buffer array to handle print
 *
 * @flags:  Calculates active flags
 *
 * @width:The Width
 *
 * @precision: Precision specifications
 *
 * @size: Size specifier
 *
 * Return: Number of chars printed
 */


int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}


/**
 * print_string - Prints a string
 *
 * @types: List a of argument
 *
 * @buffer: Buffer array to handle prints
 *
 * @flags:  Calculates active flag
 *
 * @width: get width
 *
 * @precision: Precision specifications
 *
 * @size: Size specifiers
 *
 * Return: Number of characterss printed
 */


int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	int length = 0, a;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (a = width - length; a > 0; a--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (a = width - length; a > 0; a--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (width);
		}
	}

	return (write(1, str, length));
}



/**
 * print_percent - Prints a percent signs
 *
 * @types: List of arguments
 *
 * @buffer: Buffer array to handle prints
 *
 * @flags:  Calculates active flags
 *
 * @width: get width
 * @precision: Precision specification
 *
 * @size: Size specifier
 *
 * Return: Number of chars printed
 */


int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
