#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry function of program
 * @argc: counts of elements of argv array
 * @argv: string array containing command line arguments
 * Return: int 0 on successful run
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				sum = 0;
				sum += atoi(argv[i]);
				printf("%d\n", sum);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	
	return (0);
}
