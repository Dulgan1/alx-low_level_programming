#include "main.h"

/**
 * times_table - prints the multiplications time table structured
 *
 * Return: void
 */

void times_table(void)
{
	int row;
	int col;
	int prd;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prd = row * col;
			if (col == 0)
			{
				_putchar('0' + prd);
			}
			else if (prd <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prd);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prd / 10));
				_putchar('0' + (prd % 10));
			}
		}
		_putchar('\n');
	}
}
