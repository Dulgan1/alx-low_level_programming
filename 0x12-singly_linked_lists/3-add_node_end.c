#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list.
 * @head: pointer to pointer of head.
 * @str: string for data of node.
 * Return: new node at the end of list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	int len = 0;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;
	newNode = (list_t *)(malloc(sizeof(list_t)));

	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
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
