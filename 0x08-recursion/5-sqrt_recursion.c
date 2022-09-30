#include "main.h"

/**
 * _sqrt_recursion - calculates tge square root of int n
 * @n: number///
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (getroot(n, 0));
}

/**
 * getroot - finds the square root of n
 * @n: number
 * @r: root
 * Return: int
 */

int getroot(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (getroot(n, r + 1));
}
