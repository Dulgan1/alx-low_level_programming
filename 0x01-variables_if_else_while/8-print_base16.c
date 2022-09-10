#include <stdio.h>
#include <stdlib.h>

/**
 * main - Always entey pint
 *
 * Return: 0 for success
 */

int main(void)
{
	int x = 48;

	while (x >= 48 && x <= 57)
	{
		putchar(x);
		x++;
		if (x == 58)
			x = x + 7;
	}
	if (x >= 65 && x <= 70)
	{
		while (x >= 65 && x<= 70)
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');

	return (0);
}
