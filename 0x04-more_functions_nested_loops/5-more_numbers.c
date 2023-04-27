#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char k;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar('0' + (k / 10));
			}
			_putchar('0' + (k % 10));
		}
		_putchar('\n');
	}
}
