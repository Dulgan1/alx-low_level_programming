#include "main.h"

/**
 * cap_string - changes every first later of a word prior to specific characters
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	/* check first index and change to uppercase*/
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /* iterate through string */
	{

		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z')  && CHAR_CON)
			s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
