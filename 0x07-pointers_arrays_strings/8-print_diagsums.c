#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - adds for sum of all int in diagonal of x by x 2d array (martrix)
 * @a: 2D array
 * @size: size of 2D array (e.g n size is n by n)
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int row, column;
	int sum = 0;

	for (row = 0; row <= size; row++)
	{
		for (column = 0; column <= size; column++)
		{
			if (row == column)
			{
				sum += a[row][column];
			}
		}
	}
	printf("%d\n", sum);
}
