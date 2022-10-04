#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates an array of chars and initializes with a character
 * @size: size to be allocated
 * @c: character to initialize array
 * Return: string
 */

char *create_array(unsigned int, char);

/**
 * _strdup - returns pointer of newly allocated
 * and copies string passed to it
 * @str: passed string to be copied
 */

char *_strdup(char* str);

/**
 * str_concat - concatenates two strings and saves to new memory location
 * @s1: first string for concatenation
 * @s2: second  …     …       …
 * Return: new memory location of string
 */

char *str_concat(char *s1, char *s2);

#endif
