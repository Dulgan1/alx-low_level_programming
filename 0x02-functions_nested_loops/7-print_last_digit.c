#include "main.h"

/**
 * print_last_digit - prints tge last digit of a number
 * @a: the integer parameter to pass tge number
 * Return: the last digit of the number
 */

int print_last_digit(int a)
{
	if (a > 10)
	{
		_putchar('0' + (a % 10));
		return (a % 10);
	}
	else if (a < 0)
	{
		a *= -1;
		_putchar('0' + (a % 10));
		return (a % 10);
	}
	else
	{
		_putchar('0' + a);
		return (a);
	}
}
