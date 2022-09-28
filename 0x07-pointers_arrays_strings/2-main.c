#include "main.h"

int main(void)
{
	char *f = "Something huge";
	_strchr(f, 'i');
	printf("%s\n", f);
	return (0);
}
