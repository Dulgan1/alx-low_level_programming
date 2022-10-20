#include <stdlib.h>
#include "list.h"

/**
 * print_list - prints a elements of a linked list
 * @h: head nodd of list
 * Return: size_t number of nodes
 */

size_t print_list(const char *h)
{
	size_t n = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->s);
		n++;
		h->next;
	}

	return (n);
}
