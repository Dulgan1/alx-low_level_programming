#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the index passed
 * @head: linked list (head node)
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == cnt)
			break;
		head = head->next;
		cnt++;
	}

	return (head);
}
