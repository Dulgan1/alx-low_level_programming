#include "search_algos.h"

/**
 * linear_search - linear search algorithm that works on linear array
 * @array: array to search through
 * @size: size of array
 * @value: value to search in array
 * Return: returns -1 of value is not found, returns index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
