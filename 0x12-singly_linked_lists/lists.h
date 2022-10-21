#ifndef LISTS
#define LISTS
#include <stdlib.h>

/**
 * struct list_t - singly linked list
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to the next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/**
 * print_list - prints a elements of a linked list
 * @h: head nodd of list
 * Return: size_t number of nodes
 */

size_t print_list(const list_t *h);

/**
 * list_len -  returns number nodes in a linked list
 * @h: head of linked list
 * Return: in size_t the num of nodes
 */

size_t list_len(const list_t *h);
#endif
