#include <stdio.h>

/**
 * main - entry of program
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", n);

	return (0);
}
