#include "lists.h"

/**
 * pop_listint - removes first node (head)
 * @head: pointer to pointer of head node
 * Return: value of n data of popped node
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
