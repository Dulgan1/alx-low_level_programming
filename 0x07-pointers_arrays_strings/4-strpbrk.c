#include "main.h"

/**
 * _strpbrk - return pointer to byte in s tgat matches a byte in accept
 * @accept: target match
 * @s: string to match (source)
 * Return: pointer to first occurence
 */

char *_strpbrk(char s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
		i++;
	}

	return (NULL);
}
