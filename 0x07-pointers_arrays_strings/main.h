#ifndef MAIN_H
#define MAIN_H

/**
 * _memset - fills the first n bytes of memory pointed by s with char b
 * @s: pointed address
 * @n: first n bytes to be filled
 * @b: constant char to fill with
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies n byte of src memory to dest memory
 * @src: source of string in memory 
 * @n: numver of bytes
 * @dest: memory to cipy string to
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
