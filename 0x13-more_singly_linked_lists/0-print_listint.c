#include "lists.h"

/**
 * print_listint - prints all nodes of listint_t linked list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	const int *p;

	p = &(h->n);
	while (h != NULL)
	{
		if (p == NULL)
			printf("(nil)\n");
		else
		{
			printf("%d\n", h->n);
			cnt++;
			h = h->next;
		}
	}

	return (cnt);
}
