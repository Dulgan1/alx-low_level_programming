#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from passed number to 98
 *
 * @n: parameter for the start number
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 9)
		printf("%d, ", n);
	printf("\n");
}
