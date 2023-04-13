#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @array: array of data to search through
 * @size: size of array in size_t
 * @value: target value to to search for
 * Return: index of found target, else -1
 * *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t start = 0;
	size_t end = size - 1;
	size_t mid;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = (start + end) / 2;

		printf("Searching in array: ");
		for (i = 0; i <= end; i++)
		{
			if (i < end)
				printf("%d, ", array[i]);
			else 
				printf("%d\n", array[i]);
		}
		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
