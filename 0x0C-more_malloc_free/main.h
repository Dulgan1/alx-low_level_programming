#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - allocates memory using malloc
 * @n: size of memory to allocate
 * Return: pointer to allocated memory or 98 on fail
 */

void *malloc_checked(unsigned int n);

/**
 * string_nconcat - concatenates two strings, first n chars of s2
 * @n: first n chars of s2 to concatenate with s2
 * @s1: first string
 * @s2: second string
 * Return: pointer tonnew allocated memory for the concatenated string
 */

char *string_nconcat(char *s1, char *s2);

#endif
