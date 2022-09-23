#include <stdio.h>

/**
 * main - entry of tge program
 *
 * Return: always 0
 */

int main(void)
{
	long n = 1;
	long m = 2;
	int cnto = 25;
	int cntr;

	for (cntr = 1; cntr <= cnto; cntr++)
	{
		printf("%li %li", n, m);
		n += m;
		m += n;
	}
	if (cnto % 2 == 1)
		printf("%li", n);
	printf("\n");
	
	return (0);
}
