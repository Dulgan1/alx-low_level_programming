#include <stdio.h>
#include <stslib.h>

/**
 * main - Entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int x = 48;

	while (x >= 48 && x <= 58)
	{
		putchar(x);
		x++;
	}
	putchar(00);

	return (0);
}
