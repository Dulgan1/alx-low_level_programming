#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with a character
 * @size: size to be allocated
 * @c: character to initialize array
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}
	else if (p == 0)
		return (NULL);
	else
	{
		p = malloc(sizeof(char) * size);

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	
	return (p);
}
