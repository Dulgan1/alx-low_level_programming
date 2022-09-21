#include "main.h"

/**
 * _isapha - checks by integer value if a character is alphabet or not
 * @a: integer to be passed for the checks
 * Return: 1 if its alpha and 0 if not
 */

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
