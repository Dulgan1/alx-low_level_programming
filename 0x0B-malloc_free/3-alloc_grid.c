#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* check input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*memory allocatona rows*/

	if (grid == NULL) /* check memory */
		return (NULL);

	for (i = 0; i < height; i++) /*memory allocation columns of each row*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* check memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* 2D array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
