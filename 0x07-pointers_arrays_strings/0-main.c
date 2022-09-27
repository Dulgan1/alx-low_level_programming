#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "This is for memset test";
	char *c;

	c = _memset(s, '$', 5);

	printf("%c", *s);
	return (0);
}
