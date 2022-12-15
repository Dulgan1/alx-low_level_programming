#include "main.h"

/**
 * _islower - returns 1 if the character is lower
 * @c: passed parameter as interger
 * Return: int 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
