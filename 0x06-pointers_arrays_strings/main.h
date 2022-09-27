#ifndef MAIN_H
#define MAIN_H

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

#endif
