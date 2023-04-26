#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_hexadecimal - print an integer in hexa decimal format
 * @parameters: va_list of arguments
 *
 * Return: Number of characters printed
 */
int print_hexadecimal(va_list parameters)
{
	unsigned int num = va_arg(parameters, unsigned int);
	char buffer[1024];
	int i;

	sprintf(buffer, "%x", num);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
	return (i);
}
