#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of program c, command line argument and multiplies them
 * @argc: counts of elements of argv array
 * @argv: string array
 * Return: int 0 for successful code run.
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int mul;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		mul = x * y;

		printf("%d\n", mul);
	}

	return (0);
}
