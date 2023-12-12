#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
  /* Include necessary standard library headers */

/* Function prototypes */

/**
 * linear_search - Searches for a value in an array using linear search algo...
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: the value found at a specific index
 */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
