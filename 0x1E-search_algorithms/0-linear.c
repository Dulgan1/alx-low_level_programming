#include "search_algos.h"

/**
 * linear_search - implements the linear search algorithm
 * @array: array of data to search through
 * @size: size of array
 * @value: target to search for
 * Return: in int, the index of value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (value == array[i])
				return (i);
		}
	}

	return (-1);
}
