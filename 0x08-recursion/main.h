#ifndef MAIN_H
#define MAIN_H

/**
 * _puts_recursion - re ursively prints  characters of a string
 * @s: string
 */

void _puts_recursion(char *s);

/**
 * _putchar - prints character 
 * @c: charater
 * Return: int
 */

int _putchar(char c);

/**
 * _print_rev_recursion - print string in reverse
 * @s: string to print
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - recursively counts tge length of string
 * @s: string
 * Return: length of string
 *
 */

int _strlen_recursion(char *s);

/**
 * factorial - recursively calculates the factorial of a number int
 * @n: int number to get factorial of
 * Return: factorail of number
 */
int factorial(int n);

/**                                                                               * _pow_recursion - calculates tge power of a number x raised to power y          * @x: number
 * @y: power
 * Return: int
 */

int _pow_recursion(int, int);

#endif
