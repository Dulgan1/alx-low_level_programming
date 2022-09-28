#include "main.h"

/**
 * _strchr - locates first occurence of a character c from string str
 * @c: charater
 * @s: string
 * Return: location of c in memory
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int len = 0;
	int n;

	n = len -1;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			break;
		}
		else if (i == n)
		{
			s[i] = 0;
		}
		else
		{
			continue;
		}
	}

	return (&s[i]);
}
