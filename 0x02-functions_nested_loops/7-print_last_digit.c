#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @a: the parameter to pass the number
 *
 * Return: returnss tge last digit 
 */

int print_last_digit(int a)
{
	if (a > 10)
	{
		a = a % 10;
		return (a);
	}
	else
	{
		return (a);
	}
}
