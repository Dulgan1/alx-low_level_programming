#ifndef 3_CALC_H
#define 3_CALC_H

/**
 * op_div - divides a by b
 * @a: fist int
 * @b: second int
 * Return: result of division
 */

int op_div(int a, int b);

/**
 * op_mod - modulus operation
 * @a: first int
 * @b: ssecond int
 * Return: remainder
 */
int op_mod(int a, int b);

/**
 * op_sub - gets difference of two ints
 * @a: first int
 * @b: second int
 * Return: difference of a n b
 */

int op_sub(int a, int b);
                                                                                 /**
 * op_mul - multiplies a n b
 * @a: first int
 * @b: second int
 * Return: product;
 */

int op_mul(int a, int b);

/**
 * op_add - adds two ints
 * @a: first int
 * @b: secomd int
 * Return: sum of a n b
 */
int op_add(int a, int b);

/**
 * struct op - struct op
 *                                                                                * @op: the operator *\/%+-
 * @f: the function for operator
 */

struct op
{
        char op;
        int (*f)(int a int b);
};

/**
 * op_t - for struct op
 */

typedef struct op op_t;

#endif
