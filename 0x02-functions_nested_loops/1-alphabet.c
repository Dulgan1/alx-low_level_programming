#include "main.h"

/**
 * print_alphabet - prints letters of the english alpha
 *
 * Return: void
 *
 */

void print_alphabet()
{
	char alpha;
        alpha = 'a';

        while (alpha <= 'z')
        {
                _putchar(alpha);
                alpha++;
        }
	_putchar('\n');
}
