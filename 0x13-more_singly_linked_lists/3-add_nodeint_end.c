#include "lists.h"

/**
 * add_nodeint_end - add nodes to the end of list
 * @n: for n data in a node
 * @head: head of list
 * Return: new node at end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	const int newn = n;
	const int *p;

	p = &n;
	if (p == NULL)
		return (NULL);
	newNode = (listint_t *)(malloc(sizeof(listint_t)));
	if (newNode == NULL)
		return (NULL);

	newNode->n = newn;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (newNode);
}
