#include <stdio.h>
#include <stdlib.h>

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

	while(i < 10)
	{
		putchar(s[i]);
		i++;
	}

	return (0);
}
