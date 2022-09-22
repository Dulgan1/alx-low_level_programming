#include "main.h"

/**
 * print_times_table - prints the multiplication time table
 * @n: passed integer 
 * Return: Void
 */

void print_times_table(int n)
{
	int _row;
	int _col;
	int _prd;

	if (n >= 0 && n <=15)
	{
		for (_row = 0; _row <= n; _row++)
		{
			for (_col = 0; _col <= n; _col++)
			{
				_prd = _row * _col;
				if (_col == 0)
				{
					_putchar('0' + _prd);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (_prd <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + _prd);
					}
					else if (_prd > 9 && _prd < 100)
					{
						_putchar(' ');
						_putchar('0' + (_prd / 10));
						_putchar('0' + (_prd % 10));
					}
					else if (_prd >= 100)
					{
						_putchar('0' + (_prd / 100));
						_putchar('0' + ((_prd / 10) % 10));
						_putchar('0' + (_prd % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
