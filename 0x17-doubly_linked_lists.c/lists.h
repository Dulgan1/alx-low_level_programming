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
#endif
