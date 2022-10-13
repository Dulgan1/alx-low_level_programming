#include <stddef.h>
#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

/**
 * print_name - function to print name taking function argument to modify name
 * @name: to print
 * @f: function passed as argument pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));
/**
 * array_iterator - function that executes a passed function on elements of ar
 * @array: integer array
 * @size: size of array
 * @action: function to execute
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - returns the index of element that fits comparison
 * @array: to compare elements of
 * @size: of array
 * @cmp: function for comparison
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int));

/**
 * struct op - struct op
 *
 * @op: the operator *\/%+-
 * @f: the function for operator
 */

struct op
{
	char op;
	int (*f)(int a, int b);
};

/**
 * op_t - for struct op
 */

typedef struct op op_t;

#endif
