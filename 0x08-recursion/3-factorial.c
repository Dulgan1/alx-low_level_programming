#include "main.h"

/**
 * factorial - recursively getstge factorial of int n
 * @n: number
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
