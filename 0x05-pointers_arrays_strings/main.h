#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - takse a pointer to an int as argument and updates the value it ponts to to 98
 * @n: pointer to n
 * Return: void
 *
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the value of two integers
 * @a: first int
 * @b: secomd int
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of sa string
 * @s: pointer to string
 * Return: int the length
 */

int _strlen(char *s);

/**
 * _puts - prints a string and a new line
 * @str: .
 * Return: void
 */

void _puts(char *str);

/**
 * _putchar - prints a character
 *
 * Return: .
 */

int _putchar(char);

/**
 * print_rev - reverses a string and prints it
 * @s: string to be reversed parameter
 * Return: void
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: stribg argument to be reversed
 * Return: void
 */

void rev_string(char *s);

/**
 * puts2 - prints a string skipping a character
 * @s: string parameter to pass string to be manipulated
 * Return: void
 */

void puts2(char *s);

/**
 * puts_half - prints half of the string passed 
 * @s: string parameter 
 * Return: void
 */

void puts_half(char *str);

/**
 * *_strcpy - copies string for src to dest 
 * @dest: destination string
 * @src: source string
 * Return: void
 */

char *_strcpy(char *dest, char *src);

#endif
