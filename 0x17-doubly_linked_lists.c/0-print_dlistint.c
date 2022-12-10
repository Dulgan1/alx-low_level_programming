#include "lists.h"

/**
 * print_dlistint - prints a whole doubly link list starting from the head
 * @h: (head node)pointer to head node
 * Return: returns the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt;
	dlistint_t temp = (*dlistint_t)(malloc(sizeof(dlistint_t)));
	temp = h;
	while(temp->next != NULL)
	{
		printf("%d", temp->data);
		temp->next = temp->next->next;
		cnt++;
	}

	return (cnt);
}
