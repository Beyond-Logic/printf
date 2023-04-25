#include "main.h"
#include <stdarg.h>


/**
  * _printf - Printf
  * @format: format
  * Return: Return 0 (Prinff);
  */

int _printf(const char *format, ...)
{
	va_list parameters;

	int count = 0;

	va_start(parameters, format);

	while (*format != '\0')
	{
		if ((*format) == '%')
		{
			switch (*(format + 1))
			{
				case 'c':
					_putchar(va_arg(parameters, int));
					count++;
					break;
				case 's':
					_putchar(va_arg(parameters, int));
					count++;
					break;
				case '%':
					_putchar(va_arg(parameters, int));
					count++;
					break;
			}

			format++;


		}
		else
		{
			_putchar(*format);
		}

		format++;
		count++;
	}

	va_end(parameters);

	return (count);
}
