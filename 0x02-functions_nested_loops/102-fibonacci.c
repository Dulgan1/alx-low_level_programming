#include <stdio.h>

/**
 * main - entry of tge program
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;
	int sum;

	m = 1;

	for (n = 0; n < 50; n++)
	{
		sum = n + m;
		printf("%d, ", sum);
		n = m;
		m = sum;
	}
	
	return (0);
}
