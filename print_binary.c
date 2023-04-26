#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_binary - print a binary number
  * @parameters: va_list of arguments
  *
  * Return: Number of characters printed
  */

int print_binary(va_list parameters)
{
	unsigned int num = va_arg(parameters, unsigned int);
	int binary[32], k = 0, j;
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num > 0)
		{
			binary[k++] = num % 2;
			num /= 2;
		}

		for (j = k - 1; j >= 0; j--)
		{
			_putchar(binary[j] + '0');
			count++;
		}
	}

	return (count);
}
