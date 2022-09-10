#include <stdio.h>
#include <stdlib.h>

/**
 * main - Always entey pint
 *
 * Return: 0 for success
 */

int main(void)
{
	int x = 0;

	while (x >= 0 && x < 10)
	{
		putchar(&x);
		x+++;
	}
	putchar('\n');

	return (0);
}
