#include <stdio.h>

/**
 * main - entry of program, prints all command line arguments
 * @argc: counts of argv elements
 * @argv: vector array containing command line arguments passed wuth tge program
 * Return: int 0 on successful run
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
