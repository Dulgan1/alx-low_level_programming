#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entrybpoint of code
 *
 * Return: always return 0
 *
 */

int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (i < 9)
	{
		putchar(s[i]);
		i++;
	}

	return (0);
}
