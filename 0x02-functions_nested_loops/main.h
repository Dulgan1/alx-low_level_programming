#include <stdio.h>

/**
 * print_alphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */

#ifndef ALPHA_BET
#define ALPHA_BET

void print_alphabet(void);

#endif

void print_alphabet(void)
{
	char *apb = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 26)
	{
		putchar(apb[i]);
		i++;
	}
}
