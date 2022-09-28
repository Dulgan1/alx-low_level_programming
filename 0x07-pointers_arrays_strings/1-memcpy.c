#include "main.h"

/**
 * _memcpy - copies n bytes from memory of src to memory of dest
 * @src: source string occupying memory
 * @dest: destination of copied string from src memory
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}

	if (n == 0)
	{
		return (dest);
	}
	else
	{
		i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
