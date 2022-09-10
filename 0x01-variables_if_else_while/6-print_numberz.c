#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int x = 48;

	while (x >= 48 && x <= 57)
	{
		putchar(x);
		x++;
	}
	putchar(00);

	return (0);
}
