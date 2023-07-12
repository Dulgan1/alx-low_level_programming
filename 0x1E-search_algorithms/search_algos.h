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
 * Return: void
 */

int binary_search(int *array, size_t size, int value);

/**
 * print_range - helper func to print at each check
 * @i: index before jump
 * @j: index after jump
 * Return: void
 */

void print_range(size_t i, size_t j);

/**
 * print_idx - helper func to print idx each check
 * @array: array
 * @i: index checked
 * Return: void
 */

void print_idx(int *array, size_t i);

/**
 * jump_search - find square root, jump steps to find match, end linear search
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */

int jump_search(int *array, size_t size, int value);
#endif
