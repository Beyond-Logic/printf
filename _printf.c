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

	int count = 0, i, j, k = 0;

	unsigned int num;

	int binary[32];

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
					sprintf(buffer, "%d", va_arg(parameters, int));
					for (j = 0; buffer[j] != '\0'; j++)
					{
						_putchar(buffer[j]);
						count++;
					}
					break;
				case 'b':
					{
						num = va_arg(parameters, unsigned int);
						if (num == 0)
						{
							_putchar('0');
							count++;
							break;
						}

						while (num > 0)
						{
							binary[k++] = num % 2;
							num /= 2;
						}
						for ( j = k - 1; j >= 0; j--)
						{
							_putchar(binary[j] + '0');
							count++;
						}
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
