#include "main.h"

/**
 * factorial - recursively calculates the factorial of a number int
 * @n: number to get factorial of 
 * Return: factorail of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
