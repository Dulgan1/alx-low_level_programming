#include "lists.h"

/**
 * free_listint - frees all allocs and nodes
 * @head: head node (list)
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
