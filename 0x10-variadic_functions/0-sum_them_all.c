#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed in a variadic function
 * @n: base argument
 * Return: sum
 */

int sum_them_all(int n, ...)
{
	int sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
