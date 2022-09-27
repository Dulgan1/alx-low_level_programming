#ifndef MAIN_H
#define MAIN_H

#define CHAR_CON (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n')
/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate n bytes to dest strinv
 *
 * @dest: destination string
 *
 * @src: source of string
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n bytes of source to destination string
 * @src: source string
 * @dest: destinantion string
 * Return: string goten after copying
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
 * reverse_array - reverses an array
 * @a: array 
 * @n: number of elements
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - chnages all lettes to uppercase form
 * @s: string to manipulate
 * Return: resulting string after manipulation
 */

char *string_toupper(char *s);

/**
 * cap_string - changes every first letter of  word prior to specific character
 * @: string to be manipulated
 * Return: string
 */

char *cap_string(char *);

/**
 * leet - encodes passed string to 1337 leet
 * @s: string parameter to encode
 * Return: string
 */

char *leet(char *s);

/**
 * rot13 - encodes string usibg rot 13
 * @s: string to encode
 * Return: string
 */

char *rot(char *s);
#endif
