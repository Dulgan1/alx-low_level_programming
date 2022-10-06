#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @n: size of memory to allocate
 * Return: pointer to allocated memory or 98 on fail
 */

void *malloc_checked(unsigned int n)
{
	void *p;

	p = malloc(n);

	if (p == NULL)
		exit(98);

	return (p);
}
