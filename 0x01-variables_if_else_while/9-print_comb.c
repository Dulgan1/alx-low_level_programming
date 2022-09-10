#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of code
 *
 * Return: always returns 0
 */

int main(void)
{
	int x = 48;

	while (x >= 48 && x <= 57)
	{
		putchar(x);
		if (x >= 48 && x < 57)
		{
			putchar(44);
			putchar(32);
		}
		x++;
	}
	putchar('\n');

	return (0);
}
