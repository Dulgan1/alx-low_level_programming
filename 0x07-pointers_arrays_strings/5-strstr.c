#include "main.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to searcg for
 * Return: pointer to index of first occurence
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, y;
	char *f = 0;

	i = 0;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			y = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[y] == needle[j])
					y++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (f);
}
