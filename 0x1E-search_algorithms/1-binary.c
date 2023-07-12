#include "search_algos.h"

/**
 * binary_search - implements the binary search algorithm
 * @array: array to search in.
 * @size: size of array.
 * @value: value to search for in array
 * Return:
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t low = 0;
	size_t high = size - 1;
	if (!array)
		return (-1);


	while (low <= high)
	{
		mid = (high + low)/2;
		if (array[mid] == value)
			return (mid);

		else if (array[mid] > value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - prints an array based on current binary search level
 * @array: array to print.
 * @low: low of array.
 * @high: high of array
 * Return: void
 */

void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array:");

	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d ", array[i]);
		else
			printf("%d\n", array[i];)
	}
}
