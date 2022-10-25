#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list int
 * @n: integer
 * @next: pointer to next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - prints all nodes of listint_t linked list
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h);

/**
 * listint_len - counts all nodes and return the number
 * @h: head pointer (list)
 * Return: in size_t the length of node
 */

size_t listint_len(const listint_t *h);

/**
 * add_nodeint - adds a node
 * @head: head node
 * @n: for n data in node
 * Return: pointer to node added
 */

listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - add nodes to the end of list
 * @n: for n data in a node
 * @head: head of list
 * Return: new node at end
 */

listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - frees all allocs and nodes
 * @head: head node (list)
 * Return: void
 */

void free_listint(listint_t *head);

/**
 * free_listint2 - frees all nodes of lost and set head to NULL
 * @head: pointer to pointer of head
 * Return: void
 */

void free_listint2(listint_t **head);

/**
 * pop_listint - removes first node (head)
 * @head: pointer to pointer of head node
 * Return: value of n data of popped node
 */

int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - gets the node at the index passed
 * @head: linked list (head node)
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - sums up all n data in nodes
 * @head: linled list (head)
 * Return: sum
 */

int sum_listint(listint_t *head);
#endif
