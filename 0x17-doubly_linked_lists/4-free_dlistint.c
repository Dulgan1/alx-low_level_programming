#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list with only int data, no strings
 * @head: pointer to head of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	/* return if empty list */
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
