#include "lists.h"

/**
 * free_listint2 - frees all nodes of lost and set head to NULL
 * @head: pointer to pointer of head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		ptr  = *head;
		*head = *head->next;
		free(ptr->n);
		free(ptr);
	}
}
