#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_integer - print an integer
  * @parameters: va_list of arguments
  *
  * Return: Number of characters printed
  */

int print_integer(va_list parameters)
{
	int num = va_arg(parameters, int);

	char buffer[1024];

	int count = 0;

	sprintf(buffer, "%d", num);

	while (buffer[count] != '\0')
	{
		_putchar(buffer[count]);
		count++;
	}

	return (count);
}
