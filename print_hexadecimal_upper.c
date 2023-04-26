#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_hexadecimal_upper - print an integer in hexadecimal upper format
 * @parameters: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_hexadecimal_upper(va_list parameters)
{
	unsigned int num = va_arg(parameters, unsigned int);
	char buffer[1024];
	int i;

	sprintf(buffer, "%X", num);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (i);
}
