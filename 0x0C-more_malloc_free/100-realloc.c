#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory 
 * @ptr: initial memory alloc'd pointer
 * @old_size: initial size of ptr
 * @new_size: new size to allocate
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i = 0, len = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		ptr = p;
		return (ptr);
	}
	while (len <= old_size)
		len++;

	p = malloc(new_size);
	while (i < new_size)
	{
		*(p + i) = *(ptr + i);
		if (i == old_size)
			break;
		i++;
	}
	*ptr = *p;
	return (ptr);
}
