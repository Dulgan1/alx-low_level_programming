#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
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

#endif
