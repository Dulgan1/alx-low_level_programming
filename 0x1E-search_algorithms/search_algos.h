#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>

/**
 * linear_search - linear search algorithm that works on linear array
 * @array: array to search through
 * @size: size of array
 * @value: value to search in array
 * Return: returns -1 of value is not found, returns index of value
 */

int linear_search(int *array, size_t size, int value);
#endif
