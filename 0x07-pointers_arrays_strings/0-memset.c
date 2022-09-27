#include "main.h"

/**
 * _memset - fills first n bytes of memory pointed by s with constant char b
 * @s: pinter to memory area to mainpulate (string)
 * @n: number of bytes to fill
 * @b: char to be filled with
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int len = 0;

	if (n < 0)
	{
		n *= -1;
	}

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	i -= i;
	for  (; (i <= n) && (i <= (len -1)) i++)
	{
		s[i] = b;
	}

	return (s);
}
