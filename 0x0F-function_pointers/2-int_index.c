#include "function_pointers.h"

/**
 * int_index - returns the index of element that fits comparison
 * @array: to compare elements of
 * @size: of array
 * @cmp: function for comparison
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size > 0)
		{
			for (i = 0; i < size ; i++)
			{
				if ((*cmp)(array[i]))
					return (i);
			}
			return (-1);
		}
		else if (size <= 0)
			return (-1);
	}
}
