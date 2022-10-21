#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns number nodes in a linked list
 * @h: head of linked list
 * Return: in size_t the num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
