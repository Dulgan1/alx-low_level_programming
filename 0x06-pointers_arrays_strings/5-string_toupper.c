#include "main.h"

/**
 * string_toupper - changes all letters to uppercase form
 * @s: string to manipulate
 * Return: string with all letters in uppercase
 */

char *string_toupper(char *s)
{
        while (*s) //if s exists will omit null terminator
	    if (*s >= 'a' && *s <= 'z')
	        *s = *s -'a' + 'A';
	    s++;
	return (s);
}

