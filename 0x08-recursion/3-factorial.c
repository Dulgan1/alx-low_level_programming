#include "main.h"

/**
 * factorial - recursively calculates tge factorial of int b
 * @n: number to get factorial of
 * Return: factorial 
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
