#ifndef MAIN_H
#define MAIN_H

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _memset - fills first n bytes of memory pointed by s with constant char b
 * @s: pinter to memory area to mainpulate (string)
 * @n: number of bytes to fill
 * @b: char to be filled with
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _atoi - for test
 * Return: norhing
 */

int _atoi(void);

/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * _memcpy - copies n bytes from memory of src to memory of dest
 * @src: source string occupying memory
 * @n: number of bytes
 * @dest: destination of copied string from src memory
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strchr - locates first occurence of a character c from string str
 * @c: charater
 * @s: string
 * Return: location of c in memory
 */

char *_strchr(char *s, char c);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * _strncpy - copies n bytes of source to destination string.
 * @dest: Destination string
 * @src: source string
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _islower - returns 1 if the character is lower
 * @c: passed parameter as interger
 * Return: int 1 or 0
 */

int _islower(int c);

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str);

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 * Return: difference in int
 */

int _strcmp(char *s1, char *s2);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _isalpha - checks by integer value if a character is alphabet or not
 *
 * @a: integer to be passed for the checks
 *
 * Return: 1 if its alpha and 0 if not
 */

int _isalpha(int a);

/**
 * _strpbrk - return pointer to byte in s tgat matches a byte in accept
 * @accept: target match
 * @s: string to match (source)
 * Return: pointer to first occurence
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to searcg for
 * Return: pointer to index of first occurence
 *
 */

char *_strstr(char *haystack, char *needle);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src);


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * _putchar - prints a charecter
 * @c: character to print
 * Return: int
 */

int _putchar(char c);
#endif
