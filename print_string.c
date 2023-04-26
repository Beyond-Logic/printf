#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_string - print a single
  * @parameters: va_list of arguments
  *
  * Return: Number of characters printed
  */

int print_string(va_list parameters)
{
	char *str = va_arg(parameters, char *);
	int count = 0, i;

	if (str == NULL)
	{
		str = "(null)";

	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}
