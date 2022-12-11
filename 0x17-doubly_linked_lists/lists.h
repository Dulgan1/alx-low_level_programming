#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint - Double linked list struct
 * @n: data to store integer
 * @prev: pointer to previous node
 * @next: pointer to next node
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - prints a whole doubly link list starting from the head
 * @h: (head node)pointer to head node
 * Return: returns the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h);

/**                                                                               * dlistint_len - returns number of  elements in doubly linked list
 * @h: pointer to head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - frees a doubly linked list with only int data, no strings      * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head);

/**                                                                               * get_dnodeint_at_index - get node at index
 * @head: pointer to head of doubly linked list
 * @index: given index
 * Return: pointer to node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - get sum of data in doubly linked list
 * @head: pointer to head of doubly linked list
 * Return: sum
 */
                                                                                 int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - create and insert node at nth index
 * @h: pointer to head of list
 * @idx: index
 * @n: node data
 * Return: address of inserted node, or NULL if failed
 */                                                                              

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**                                                                               * insert_node - insert node at given index
 * @tmp: ptr to nth position node in doubly linked list                           * @n: node data                                                                  * Return: address of inserted node
 */

dlistint_t *insert_node(dlistint_t *tmp, int n);
#endif
