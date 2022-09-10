#include <stdio.h>
#include <stdlib.h>

/**
 * main - entey point
 *
 * Return: alwasys returns 0
 */

int main(void)
{
	int x = 97;

	while (x >= 97 && x <= 122)
	{
		if (x != 113 && x != 101)
		{
			putchar(x);
		}
		x++;
	}
	printf("\n");

	return (0);
}
