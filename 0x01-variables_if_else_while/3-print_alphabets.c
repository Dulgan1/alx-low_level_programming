#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while (x >= 97 && x <= 122)
	{
		putchar(x);
		x++;
	};
	while (y >= 65 && y <= 90)
	{
		putchar(y);
		y++;
	};
	putchar(0);

	return (0);
}
