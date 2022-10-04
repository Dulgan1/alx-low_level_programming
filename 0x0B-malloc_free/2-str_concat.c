#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and saves to new memory location
 * @s1: first string for concatenation
 * @s2: second  …     …       …
 * Return: new memory location of string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	char *p;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
	{
		len1++;
		i++;
	}

	while (*(s2 + j))
		len2++, j++;
	len2++;
	p = malloc(sizeof(char) * (len1 + len2));

	if (p == NULL)
		return (NULL);
	for (j = 0; j < len1; j++)
	{
		*(p + j) = *(s1 + j);
	}
	for (j = 0; j < len2; j++)
	{
		*(p + i - 1) =  *(s2 + j);
		i++;
	}
	return (p);
}
