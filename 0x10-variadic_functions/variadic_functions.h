#ifndef V_F
#define V_F
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed in a variadic function
 * @n: base argument
 * Return: sum
 */

int sum_them_all(int n, ...);

/**
 * print_numbers - prints all numbers from arguments of variadic function
 * @separator:  separates numbers in ouyput
 * @n: number of  arguments  baze argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings passed in variadic function
 * @separator: separates thestrings in outpur
 * @n: number of arguments of function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_char - prints char
 * @ptr: valist
 */

void print_char(va_list ptr);

/**
 * print_int - prints int
 * @ptr: valist
 */

void print_int(va_list ptr);

/**
 * print_float - prints float
 * @ptr: valist
 */

void print_flt(va_list ptr);

/**
 * print_string - prints string
 * @ptr: valist
 */

void print_str(va_list ptr);

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */

void print_all(const char * const format, ...);

/**
 * struct ffunc - struct
 * @alph: letter signifying data type
 * @func: function ptr
 */

typedef struct ffunc
{
	char alph;
	void (*func)(va_list);
} ffunc_t;
#endif
