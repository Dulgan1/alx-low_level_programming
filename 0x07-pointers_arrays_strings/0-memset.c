#include "main.h"

/**
 * _memset - fills first n bytes of memory pointed by s with constant char b
 * @s: pinter to memory area to mainpulate (string)
 * @n: number of bytes to fill
 * @b: char to be filled with
 * Return: string
 */

char *_memset(char *s, char b, int n)
{
	int i = 0;

	for  (; s[i] <= s[n]; i++)
	{
		s[i] = b;
	}

	return (s);
}
