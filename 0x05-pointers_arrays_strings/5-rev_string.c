#include "main.h"

/**
 * rev_string - prints tge reverse of a string
 * @s: string parameter to be reversed
 * Return:  void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}

	i = len;

	while (i > 0)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
