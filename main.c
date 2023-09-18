#include <stdio.h>
#include "main.h"

int main(void)
{
	int len;

	len = _printf("Hello, %s !\n", "world");
	_printf("Length: [%d]\n", len);

	len = _printf("Character: [%c]\n", 'A');
	_printf("Length: [%d]\n", len);

	len = _printf("Integer: [%d]\n", 12345);
	_printf("Length: [%d]\n", len);

	len = _printf("Hexadecimal: [%x]\n", 255);
	_printf("Length: [%d]\n", len);

	_printf("Length: [%d]\n", len);

	return (0);
}
