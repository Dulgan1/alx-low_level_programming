#include "main.h"

/**
 * print_rev - reverses the passed string argument, and prints it
 * @s: string to be reversed parameter
 * Return: void
 */

void print_rev(char *s)
{
	int len; /* length of string */
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	i = len;

	while (i > 0)
	{
		_putchar(*s);
		--s;
		i--;
	}

	_putchar('\n');
}
