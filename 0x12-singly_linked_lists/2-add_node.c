#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node to the list
 * @head: head of list
 * @str: for string data in the node
 * Return: a node added to list
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *newNode;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return(NULL);
	newNode = (list_t *)(malloc(sizeof(list_t)));
	if (newNode == NULL)
		return (NULL);
	while (*(str + len) != '\0')
		len++;

	newNode->str = strdup(str);
	newNode->len = len;

	if (head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (newNode);
}
