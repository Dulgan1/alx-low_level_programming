#include <stdio.h>
#include "main.h"

int main(void)
{
	char *p;
	char *s1 = "Lalalal";
	char *s2 = "life is fun with c";
	p = string_nconcat(s1, s2, 4);
	printf("%s\n", p);
	return (0);
}
