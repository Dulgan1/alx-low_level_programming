#include "lists.h"

/**
 * listint_len - counts all nodes and return the number
 * @h: head pointer (list)
 * Return: in size_t the length of node
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
