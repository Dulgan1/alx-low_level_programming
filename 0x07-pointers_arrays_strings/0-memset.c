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
	
	if (n <= 0)
	{
		return (s);
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
			s[i] = b;
	}

	return (s);
}
