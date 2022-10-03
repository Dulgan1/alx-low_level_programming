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

	while (*(str + i))
	{
		len++;
		i++;
	}
	len++;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
	{
		*(p + j) = *(str + j);
		/*if (i == len)
		*	*(p + j) = '\0';
		*/
	}
	return (p);
}
