#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: int 0 for successful run
 */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
