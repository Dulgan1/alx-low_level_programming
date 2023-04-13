#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stddef.h>
#include <stdio.h>

/**
 * linear_search - implements the linear search algorithm
 * @array: array of data to search through
 * @size: size of array
 * @value: target to search for
 * Return: in int, the index of value
 */

int linear_search(int *array, size_t size, int value);

/**
 * binary_search - implements the binary search algorithm
 * @array: array of data to search through
 * @size: size of array in size_t
 * @value: target value to to search for
 * Return: index of found target, else -1
 * *
 */

int binary_search(int *array, size_t size, int value);

/**
 * print_range - helper func to print at each check
 * @i: index before jump
 * @j: index after jump
 */
void print_range(size_t i, size_t j);

/**
 * print_i - helper func to print idx each check
 * @array: array
 * @i: index checked
 */
void print_i(int *array, size_t i);

/**
 * jump_search - find square root, jump steps to find match, end linear search
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int jump_search(int *array, size_t size, int value);
#endif
