#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char k;

	for (int i = 0; i <= 10; i++)
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
