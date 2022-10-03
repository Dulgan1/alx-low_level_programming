#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer of newly allocated
 * and copies string passed to it
 * @str: passed string to be copied
 */

char *_strdup(char* str)
{
	int i;
	int len;
	int j;
	char *p;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (*str == "NULL" || *str[0] == '\0')
		return (NULL);

	p = malloc(sizeof(char) * len);
	for (j = 0; j < len +1; j++)
	{
		str[j] = p[j];
	}
	return (p);
}
