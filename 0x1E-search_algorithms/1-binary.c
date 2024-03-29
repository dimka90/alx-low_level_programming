#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int counter;
	int low;
	int high;
	int mid_value;

	/* Checking if Array is NULL */
	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (counter = low; counter < high; counter++)
			printf("%d, ", array[counter]);
		printf("%d\n", array[counter]);

		mid_value = low + (high - low) / 2;

		if (array[mid_value] == value)
			return (mid_value);

		if (array[mid_value] < value)
			low = mid_value + 1;
		else
			high = mid_value - 1;
	}

	return (-1);
}
