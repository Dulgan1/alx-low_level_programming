#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all nodes in list (memory freeing)
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
