#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always 0 for succes
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
		printf("%n is negative\n", n);
	else if  (n > 0)
		printf("%n is positvie\n", n);
	else
		printf("%n is zero\n", n);
	return (0);
}
