#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @ptr: valist
 */

void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * print_int - prints int
 * @ptr: valist
 */

void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * print_flt - prints float
 * @ptr: valist
 */

void print_flt(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * print_str - prints string
 * @ptr: valist
 */

void print_str(va_list ptr)
{
	char *s;

	s = va_arg(ptr, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list ptr;

	ffunc_t choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_flt},
		{'s', print_str},
		{'\0', NULL}
	};

	/* iterate format*/
	va_start(ptr, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].alph != '\0')
		{
			if (choice[i].alph == format[j])
			{
				printf("%s", separator);
				choice[i].func(ptr);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(ptr);
	printf("\n");
}
