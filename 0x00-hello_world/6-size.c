#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 for success
 */

int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu\n", sizeof(long int))
	printf("Size of long long int: %zu\n", sizeof(long long int));
	printf("Size of float: %zu\n", sizeof(float));
	return (0);
}
