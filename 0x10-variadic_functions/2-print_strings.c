#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings passed in variadic function
 * @separator: separates thestrings in outpur
 * @n: number of arguments of function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 1; i <= n; i++)
		{
			str = va_arg(ptr, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
