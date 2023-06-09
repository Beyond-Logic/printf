#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list parameters);
int print_string(va_list parameters);
int print_integer(va_list parameters);
int print_binary(va_list parameters);
int print_unsigned_integer(va_list parameters);
int print_octal(va_list parameters);
int print_hexadecimal(va_list parameters);
int print_hexadecimal_upper(va_list parameters);

#endif /* MAIN_H */
