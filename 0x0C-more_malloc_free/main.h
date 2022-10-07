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

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * array_range - creates array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max);

/**
 * _realloc - reallocates memory
 * @ptr: initial memory alloc'd pointer
 * @old_size: initial size of ptr
 * @new_size: new size to allocate
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
