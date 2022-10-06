#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings, first n chars of s2
 * @n: first n chars of s2 to concatenate with s2
 * @s1: first string
 * @s2: second string
 * Return: pointer tonnew allocated memory for the concatenated string
 */

char *string_nconcat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int len1 = 0; /* For length of s1 */
	int len2 = 0; /* For length of s2 */
	int j= 0;

	while (s1[i] != '\0') /* counts length of s1 */
		len1++, i++;
	while (s1[j] != '\0') /* counts length of s2 */
		if (j <= n) /* length should not be more than n chars fo s2 */
			len2++, j++;
		else
			break;
	len2++;
	i = 0;
	j = 0;

	p = malloc(sizeof(char) * (len1 + len2)); /* allocates memory */

	if (p == NULL)
		return (NULL);
	while (i < len1) /* copying s1 to allocatrd memory*/
	{
		*(p + i) = *(s1 + i);
		i++;
	}
	while (j < len2) /* add s2 to allocated memory after copying s1 */
	{
		*(p + i) = *(s2 + j);
		i++;
	}

	return (p);
}
