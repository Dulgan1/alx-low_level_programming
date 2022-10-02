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

/**
 * _sqrt_recursion - calculates the square root of n
 * @n: number
 * Return: int
 */
                                                                                 int _sqrt_recursion(int n);

/**
 * getroot - finds the square root of n
 * @n: number
 * @r: root
 * Return: int                                                                    */

int getroot(int n, int r);

/**
 * checker - checks if n is orime number 
 * @n: nymber
 * @divider: to be
 * Return: 1 if trye, 0 if not 
 */

int checker(int n, int divider);

/**
 * is_prime_number - checks if a number is prime or not
 * @n: nunber
 * Return: 1 if trye , 0 if false
 */

int is_prime_number(int n);

/**
 * is_palindrome - check if palindrome                                            * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s);

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length                                                                 */
                                                                                 int _strlen(char *s);

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string                                      * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not                                              */                                                                              
int compare(char *head, char *tail);
#endif
