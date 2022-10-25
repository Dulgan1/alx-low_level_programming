#include "lists.h"

/**
 * insert_nodeint_at_index - add node at a specified index in list
 * @head: pointer pointing list
 * @idx: index to add node
 * @n: for n data in the added node
 * Return: listint_t node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	listint_t *newNode, *temp;

	if (head == NULL)
		return (NULL);

	newNode = (listint_t *)(malloc(sizeof(listint_t)));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	temp = *head;
	while (cnt < (idx - 1))
	{
		temp = temp->next;
		cnt++;
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return (newNode);
}
