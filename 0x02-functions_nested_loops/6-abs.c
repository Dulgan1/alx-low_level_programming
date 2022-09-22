#include "main.h"

/**
 * _abs - gets and prints the absolute value of given number
 *
 *
 * @a: The passed integer (parameter)
 *
 * Return: returns the absolute value of passed int
 *
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (-1 * a);
	}
	else
	{
		return (1 * a);
	}
}
