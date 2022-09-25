#include "main.h"

/**
 * print_diagonal - prints a diagonal look-alike :)
 *
 * @n: number as argument to specify the length of diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int slash;
	int space;

START: if (n > 0)
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		n *= -1;
		goto START;
	}
	_putchar('\n');
}
