#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int x = 97;

	while (x >= 97 && x <= 122)
	{
		putchar(x);
		++x;
	};

	printf("\n");

	return (0);
}
