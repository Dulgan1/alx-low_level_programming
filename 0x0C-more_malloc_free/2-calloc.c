#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for array and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string/array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i; /* match unsigned arguments */

	if (nmemb <= 0 || size <= 0) /* validate input */
		return (NULL);

	/* allocate memory and check if error */
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	/* set allocated memory values to 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)p + i) = 0; /* type cast assigning values*/

	return (p);
}
