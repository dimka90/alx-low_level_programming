#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
size_t counter;
(void)value;

for (counter = 0; counter < size; counter++)
{

	if (array == NULL) return (-1);
	/* printing each value in the array */
	printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);

	/* checking for match in the array */

	if ( array[counter] == value)
	{
		return array[counter];
	}
}


return (-1);
}
