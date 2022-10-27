#include "main.h"

/**
 *  binary_to_uint - converts binary to unsigned integer
 *  @b: string of 0's and 1s
 *  Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0, j = 0;

	if (b == NULL)
		return (n);
	while (*(b + i) != '\0')
		i++;
	while (*(b + j))
	{
		if (*(b + j) != '1' && *(b + j) != '0')
			return (n / 2);
		if (*(b + j) == '1')
			n += (1 * (1 << i));
		j++;
		i--;
	}

	return (n / 2);
}
