#include "main.h"
#include <stdio.h>

/**
 * main - entry of program, prints number of command line arguments passed
 * @argc: argv elements count
 * @argv: array string containing command line arguments
 * Return: 0 on successful run
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	
	return (0);
}
