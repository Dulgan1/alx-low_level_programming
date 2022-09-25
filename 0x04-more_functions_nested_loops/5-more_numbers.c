#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char k;

	k = '0';

	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 14; j++)
		{
			if(j > 9)
			{
				_putchar('0' + (j /10);
				_putchar('0' + (j % 10);
			}
			_putchar(k);
			k++;
		}
		_putchar('\n');
	}
}
