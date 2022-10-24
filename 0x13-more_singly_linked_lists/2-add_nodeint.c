#include "lists.h"

/**
 * add_nodeint - adds a node
 * @head: head node
 * @n: for n data in node
 * Return: pointer to node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	const int newn = n;
	const int  *p;

	p = &n;

	if (p == NULL)
		return (NULL);

	newNode = (listint_t *)(malloc(sizeof(listint_t)));

	if (newNode == NULL)
		return (NULL);

	newNode->n = newn;

	if (head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (newNode);
}
