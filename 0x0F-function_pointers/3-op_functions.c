#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - adds two ints
 * @a: first int
 * @b: secomd int
 * Return: sum of a n b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a 
 * @a: first int
 * @b: second int
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a n b
 * @a: first int
 * @b: second int
 * Return: product;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: fist int
 * @b: second int
 * Return: result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus operation
 * @a: first in
 * @b: second int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
