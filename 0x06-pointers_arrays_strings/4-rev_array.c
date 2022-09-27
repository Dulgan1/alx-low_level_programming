#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{

	int tmp, bgn = 0; /* bgn: beginning of  array*/
	int end = n - 1; /* omit null terminator in length of array */

	while (bgn < end)
	{
		tmp = *(a + bgn);
		*(a + bgn) = *(a + end);
		*(a + end) = tmp;
		bgn++, end--;
	}
}
