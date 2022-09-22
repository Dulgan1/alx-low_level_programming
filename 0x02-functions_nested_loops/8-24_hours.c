#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int _hrs = 0;
	int _min = 0;

	while (_hrs < 24)
	{
		while (_min < 60)
		{
			_putchar('0' + (_hrs / 10));
			_putchar('0' + (_hrs % 10));
			_puthcar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		_hrs++;
	}
}
