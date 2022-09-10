#include <stdio.h>
#include <stdlib.h>

/**
 * main - eentey point
 *
 * Return: Always returnss 0
 */

int main(void)
{
	int x = 122;

	while (x <= 122 && x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');

	return (0);
}
