#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function to print name taking function argument to modify name
 * @name: to print
 * @f: function passed as argument pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
