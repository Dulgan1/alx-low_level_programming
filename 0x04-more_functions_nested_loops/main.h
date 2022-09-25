#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints a character
 *
 * Return: int
 */

int _putchar(char);
/**
 * isupper - evaluates an alphabet if upper or lower
 *
 * Return: int 1 for upper and 0 for lower case 
 */

int _isupper(int);

/**
 * _isdigit - checks if character is a digit
 *
 * Return: i t 1 0r 
 */

int _isdigit(int);

/**
 *
 * mul - multiplies tow int
 * 
 * Return: product
 *
 */

int mul(int, int);

/**
 * print_numbers - prints numbers from 1 to 9
 *
 * Return: void
 */

void print_numbers(void);

/**
 * print_most_numbers - pru ts from 0 to 9 except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void);

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void);

/**
 * print_line - printsa line
 * @n: number of characters to produce a line (length)
 * Return: void
 */

void print_line(int);

/**
 * print_diagonal - prints diagonal 
 * 
 * Return: void
 */

void print_diagonal(int);

/**
 * print_square - draws a square
 * @
 * Return: void
 */

void print_square(int);

/**
 * print_triangle - draws a triangle with #
 *
 * Return: void
 */

void print_triangle(int);
#endif
