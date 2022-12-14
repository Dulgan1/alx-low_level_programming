#ifndef LISTS
#define LISTS
#include <stdlib.h>
#include <string.h>

/**
 * struct list_t - singly linked list
 * @str: malloc'ed string
 * @len: length of string
 * @next: points to the next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;

/**
 * print_list - prints a elements of a linked list
 * @h: head nodd of list
 * Return: size_t number of nodes
 */

size_t print_list(const list_t *h);

/**
 * list_len -  returns number nodes in a linked list
 * @h: head of linked list
 * Return: in size_t the num of nodes
 */

size_t list_len(const list_t *h);

/**
 * add_node - adds a node to the list
 * @head: head of list
 * @str: for string data in the node
 * Return: a node added to list
 */

list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end of the list.
 * @head: pointer to pointer of head.
 * @str: string for data of node.
 * Return: new node at the end of list.
 */

list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - frees all nodes in list (memory freeing)
 * @head: head of list
 * Return: void
 */

void free_list(list_t *head);
#endif
