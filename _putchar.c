#include <unistd.h>

/**
  *_putchar - putchar
  * @c: c
  * Return: 0 (putchar);
  */

int _putchar(char c)
{
	static int count;

	if (c == '\0')
	{
		return (count);
	}
	write(1, &c, 1);

	count++;

	return (count);
}
