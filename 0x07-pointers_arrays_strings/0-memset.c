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

	if (n > 0)
	{
		for  (; i <= n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
