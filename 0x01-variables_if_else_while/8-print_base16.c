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
			x = x + 39;
	}
	if (x >= 97 && x <= 102)
	{
		while (x >= 97 && x <= 102)
		{
			putchar(x);
			x++;
		}
	}
	putchar('\n');

	return (0);
}
