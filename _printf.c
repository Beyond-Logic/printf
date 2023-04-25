#include "main.h"
#include <stdarg.h>
#include <stdio.h>


/**
  * _printf - Printf
  * @format: format
  * Return: Return 0 (Prinff);
  */

int _printf(const char *format, ...)
{
	va_list parameters;

	int count = 0, i;

	char buffer[1024];

	va_start(parameters, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					_putchar(va_arg(parameters, int));
					count++;
					break;
				case 's':
				{
					char *str = va_arg(parameters, char *);

					for (i = 0; str[i] != '\0'; i++)
					{
						_putchar(str[i]);
						count++;
					}
					break;
				}
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
				case 'i':
					sprintf(buffer, "%d", va_arg(parameters, int));
					for (i = 0; buffer[i] != '\0'; i++)
					{
						_putchar(buffer[i]);
						count++;
					}
					break;
				default:
					_putchar('%');
					count++;
					break;

			}

			format += 2;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}

	va_end(parameters);

	return (count);
}
