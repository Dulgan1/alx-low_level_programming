#ifndef MAIN_H
#define MAIN_H

/**
 * _purchar - prints character
 *
 * Return: void
 *
 */

void _putchar(char);

/**
 * islower - checks if a letter is lowercase or uppercase
 *
 * Return: 1 if its lowercase 0 if its uppercase
 */

int _islower(int);

/**
 * _isalpha - checks if a given int is an alphabet base on ASCII
 *
 * Return: 1 if true amd 0 if not
 */

int _isalpha(int);

/**
 * _abs - gets the absolute value of a passed integer
 *
 * Return: absolute value                                                   */
int _abs(int);

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
 * _strlen - returns the length of sa string
 * @s: pointer to string
 * Return: int the length
 */

int _strlen(char *s);

/**                                                                         * _puts - prints a string and a new line
 * @str: .
 * Return: void
 */
                                                                           void _puts(char *str);

/**
 * *_strcpy - copies string for src to dest                                 * @dest: destination string
 * @src: source string
 * Return: void
 */

char *_strcpy(char *dest, char *src);

/**                                                                         * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s);

/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *                                                                          * Return: char *
 */

char *_strcat(char *dest, char *src);
/**                                                                         * _strncat - concatenate n bytes to dest strinv                            *
 * @dest: destination string
 *
 * @src: source of string
 *
 * Return: char                                                             */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n bytes of source to destination string
 * @src: source string
 * @dest: destinantion string                                                                              * Return: string goten after copying
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - comparies two strings
 * @s1: first string
 * @s2: second string
 * Return: difference in integer
 */

int _strcmp(char *s1, char *s2);

/**
 * _memset - fills the first n bytes of memory pointed by s with char b
 * @s: pointed address
 * @n: first n bytes to be filled
 * @b: constant char to fill with
 * Return: char *
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: source string to search
 * @needle: target substring to search for                                                                 * Return: pointer to string at first occurwnce
 */

char *_strstr(char *haystack, char *needle);

/**
 * _memcpy - copies n byte of src memory to dest memory
 * @src: source of string in memory
 * @n: numver of bytes
 * @dest: memory to cipy string to
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**                                                                                                        * _strpbrk - return pointer to byte in s that matcjes a byte in accept
 * @s: string to match (source)
 * @accept: target string
 * Return: address of first match
 */

char *_strpbrk(char *s, char *accept);
/**
 * _strchr - locates first occurence of char c in string s
 * @s; string
 * @c: character
 * Return: char location                                                                                   */

char *_strchr(char *s, char c);

/**
 * _strspn - returns length of matching  string
 * @s: source string
 * @accept:
 * Return: length
 */
                                                                                                          unsigned int _strspn(char *s, char *accept);
													  /**
 * _strchr - locates first occurence of char c in string s                        * @s; string
 * @c: character
 * Return: char location                                                          */
                                                                                 char *_strchr(char *s, char c);
#endif
