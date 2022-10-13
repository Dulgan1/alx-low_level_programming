#ifndef V_F
#define V_F

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

#endif
