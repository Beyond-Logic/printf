#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_char - print a single character
  * @parameters: va_list of arguments
  *
  * Return: Number of characters printed
  */

int print_char(va_list parameters)
{
	char c = va_arg(parameters, int);

	_putchar(c);

	return (1);
}
