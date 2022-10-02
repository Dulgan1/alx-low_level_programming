#include "main.h"
#include <stdio.h>

/**
 * main - entry of program, prints the name of tge name of the program
 * @argc: counts of elements in argv
 * @argv: command line arguments stored as string in array
 * Return: 0 on successful program
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	
	return (0);
}
