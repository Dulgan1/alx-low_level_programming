#include "main.h"

/**
 * print_line - prints a line
 * @n: nber of character to produce a line (length of line)
 * Return: void
 *
 */

void print_line(int n)
{
	for (;; n--)
	{
		if (n == 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			if (n < 0)
			{
				n *= -1;
			}
			else
			{
				_putchar('_');
			}
		}
	}
}
