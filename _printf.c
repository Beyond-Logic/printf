#include "main.h"
#include <stdarg.h>
#include <stdio.h>


/**
  * _printf - Printf Function
  * @format: format
  * Return: Return 0 (Prinff);
  */

int _printf(const char *format, ...)
{
	va_list parameters;

	int count = 0, i, j;

	char buffer[1024];

	va_start(parameters, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{	i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(parameters);
					break;
				case 's':
					count += print_string(parameters);
					break;
				case 'd':
				case 'i':
					count += print_integer(parameters);
					break;
				case 'b':
					count += print_binary(parameters);
					break;
				case 'u':
					count += print_unsigned_integer(parameters);
					break;
				case 'o':
					count += print_octal(parameters);
					break;
				case 'x':
					sprintf(buffer, "%x", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				case 'X':
					sprintf(buffer, "%X", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				case 'p':
					sprintf(buffer, "%p", va_arg(parameters, void *));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;

			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}

	va_end(parameters);

	return (count);
}
