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

/**
 * _strpbrk - return pointer to byte in s that matcjes a byte in accept
 * @s: string to match (source)
 * @accept: target string
 * Return: address of first match
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strchr - locates first occurence of char c in string s
 * @s; string
 * @c: character
 * Return: char location
 */

char *_strchr(char *s, char c);

/**
 * _strspn - returns length of matching  string
 * @s: source string
 * @accept:
 * Return: length
 */

unsigned int _strspn(char *s, char *accept);

#endif
