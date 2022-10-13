#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers from arguments of variadic function
 * @separator:  separates numbers in ouyput
 * @n: number of  arguments  baze argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n > 0)
	{
		va_start(ptr, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != n && separator != NULL)
				printf("%s", separator);

		}
		va_end(ptr);
	}
	printf("\n");
}
