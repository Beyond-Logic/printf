#include <unistd.h>

/**
  *_putchar - putchar
  * @c: c
  * Return: 0 (putchar);
  */

int _putchar(char c)
{
	if (c == '\0')
	{
		return (0);
	}
	return (write(1, &c, 1));
}
