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
#endif
