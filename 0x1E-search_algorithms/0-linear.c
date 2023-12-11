#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array using linear search algo..
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located; or
 *  -1 if the value is not found.
 */

int linear_search(int *array, size_t size, int value)
{
size_t counter;

for (counter = 0; counter < size; counter++)
{

	if (array == NULL)
	{
		return (-1);
	}
	/* printing each value in the array */
	printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);

	/* checking for match in the array */

	if (array[counter] == value)
	{
		return (array[counter]);
	}
}


return (-1);
}
