#include "lists.h"

/**
 * print_dlistint - prints a whole doubly link list starting from the head
 * @h: (head node)pointer to head node
 * Return: returns the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;
	dlistint_t *temp = (malloc(sizeof(dlistint_t)));
	temp->n = h->n;
	temp->next = h->next;
	temp->prev = h->next;

	while(temp)
	{
		printf("%d\n", temp->n);
		temp  = temp->next;
		cnt++;
	}

	return (cnt);
}
