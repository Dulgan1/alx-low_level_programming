#include "main.h"

/**
 * is_prime_number - checks if a number is prime number or not.
 * @n: number to check
 * Return: 1 for true, 0 for false
 *
 */

int is_prime_number(int n)
{
	int divider = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (checker(n, divider);
}

/**
 * checker - checks if n is prime number using the divider
 * @n: number
 * @divider: to divide
 * Return: 1 if true, 0 if false
 */

int checker(int n, int divider)
{
	if (n == divider)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (checker(n, divider + 1);
}
