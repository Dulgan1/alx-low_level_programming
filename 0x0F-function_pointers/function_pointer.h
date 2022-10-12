#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

/**
 * print_name - function to print name taking function argument to modify name
 * @name: to print
 * @f: function passed as argument pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));

#endif
