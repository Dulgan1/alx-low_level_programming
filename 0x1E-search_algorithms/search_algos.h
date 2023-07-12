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

/**
 * print_array - prints an array based on current binary search level
 * @array: array to print.
 * @low: low of array.
 * @high: high of array
 * Return: void
 */

void print_array(int *array, size_t low, size_t high);

/**
 * binary_search - implements the binary search algorithm
 * @array: array to search in.
 * @size: size of array.
 * @value: value to search for in array
 * Return:
 */

int binary_search(int *array, size_t size, int value);
#endif
