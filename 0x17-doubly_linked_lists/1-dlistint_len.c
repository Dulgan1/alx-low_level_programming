#include "lists.h"

/**
 * dlistint_len - returns number of  elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		h = h->next;
		cnt += 1;
	}

	return (cnt);
}
