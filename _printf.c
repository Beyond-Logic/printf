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
					_putchar((char)va_arg(parameters, int));
					count++;
					break;
				case 's':
				{
					char *str = va_arg(parameters, char *);

					for (j = 0; str[j] != '\0'; j++)
					{
						_putchar(str[j]);
						count++;
					}
				}
					break;
				case 'd':
				case 'i':
					sprintf(buffer, "%d", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				case 'u':
					sprintf(buffer, "%u", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				case 'o':
					sprintf(buffer, "%o", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
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
