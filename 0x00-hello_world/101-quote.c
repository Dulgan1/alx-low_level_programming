#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry pointof program
 *
 * Return: will be a 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return 1;
}
