#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a passed function on elements of ar
 * @array: integer array
 * @size: size of array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
