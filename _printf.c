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

	int count = 0, i, num, digits = 0, temp, divisor;

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
				{
					num = va_arg(parameters, int);

					if (num < 0)
					{
						_putchar('_');
						count++;
						num = -num;
					}

					temp = num;

					while (temp > 0)
					{
						temp /= 10;
						digits++;
					}

					while (digits > 0)
					{
						divisor = 1;

						for (i = 1; i < digits; i++)
						{
							divisor *= 10;
						}

						_putchar(num / divisor + '0');
						count++;
						num %= divisor;
						digits--;
					}

					break;
				}
				default:
					_putchar('%');
					_putchar(*(format + 1));
					count += 2;
					break;
			}
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(parameters);

	return (count);
}
