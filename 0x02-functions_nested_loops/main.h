#include <stdlib.h>
#include <stdio.h>

/**
 * print_alphabet - pronts the letters of tge english alpha
 *
 * Return: void
 *
 */
void print_alphabet(void)
{
	char *apb = "abcdefghijklmnopqrstuvwxyz\n";
	char *sub;
	int i = 0;

	while (i < 26)
	{
		sub = putchar(apb[i]);
		i++;
	}
}
