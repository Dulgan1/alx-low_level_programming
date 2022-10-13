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
 * Returnvoid
 */

void print_numbers(const char *separator, const unsigned int n, ...);
#endif
