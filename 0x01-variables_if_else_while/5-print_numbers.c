#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point 
 *
 * Return: always 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");

	return (0);
}
