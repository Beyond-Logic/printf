#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_octal - print an integer in octal format
 * @parameters: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_octal(va_list parameters)
{
	unsigned int num = va_arg(parameters, unsigned int);
	char buffer[1024];
	int i;

	sprintf(buffer, "%o", num);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (i);
}
