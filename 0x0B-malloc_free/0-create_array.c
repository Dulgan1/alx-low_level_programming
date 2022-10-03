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
	char *temp;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(char) * size);
		p[0] = c;
		temp = p;
		free(p);
	}
	
	return(temp);
}
