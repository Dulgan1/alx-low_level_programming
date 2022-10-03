#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer of newly allocated
 * and copies string passed to it
 * @str: passed string to be copied
 */

char *_strdup(char* str)
{
	int i = 0;
	int len = 0;
	int j;
	char *p;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * len);
	for (j = 0; j <= len + 1; j++)
	{
		*(str + j) = *(p + j);
		if (i == len + 1)
			*(p + j) = '\0';
	}
	return (p);
}
