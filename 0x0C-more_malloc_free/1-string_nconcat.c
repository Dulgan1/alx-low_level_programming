#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings, first n chars of s2
 * @n: first n chars of s2 to concatenate with s2
 * @s1: first string
 * @s2: second string
 * Return: pointer tonnew allocated memory for the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0;
	unsigned int len1 = 0; /* For length of s1 */
	unsigned int len2 = 0; /* For length of s2 */
	unsigned int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0') /* counts length of s1 */
		len1++, i++;
	while (s1[j] != '\0') /* counts length of s2 */
		if (j <= n) /* length should not be more than n chars fo s2 */
			len2++, j++;
		else
			break;
	i = 0;
	j = 0;

	p = malloc(sizeof(*p) * (len1 + len2)); /* allocates memory */

	if (p == NULL)
		return (NULL);
	while (i < len1) /* copying s1 to allocatrd memory*/
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	i = len1;
	while (j < len2) /* add s2 to allocated memory after copying s1 */
	{
		*(p + i) = *(s2 + j);
		j++;
		i++;
	}

	return (p);
}
