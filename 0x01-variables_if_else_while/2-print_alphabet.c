#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	x = int(alphabet);
	tolower(alphabet);
	putchar(alphabet);

	return (0);
}
