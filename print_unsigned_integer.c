#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_unsigned_integer - print unsigned integer
  * @parameters: va_list of arguments
  *
  * Return: Number of characters printed
  */

int print_unsigned_integer(va_list parameters)
{
	unsigned int num = va_arg(parameters, unsigned int);
	char buffer[1024];
	int i;

	sprintf(buffer, "%u", num);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}


	return (i);
}
