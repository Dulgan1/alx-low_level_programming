#ifndef LISTS
#define LISTS
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to the next node
 */

typedef struct list_s
{
	char *s;
	unsigned int len;
	struct list_s *next;
} list_s;

/**
 * print_list - prints a elements of a linked list
 * @h: head nodd of list
 * Return: size_t number of nodes
 */

size_t print_list(const char *h);
#endif
