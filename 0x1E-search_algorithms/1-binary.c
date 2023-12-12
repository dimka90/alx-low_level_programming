#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
        int counter;
	int low;
	int high;
	int mid_value;
/* checking if Array is NULL */
	if (array == NULL)
		return (-1);

for (low = 0, high = size - 1; high >= low;)
	{
		printf("Searching in array: ");
		for (counter = low; counter < high; counter++)
			printf("%d, ", array[counter]);
		printf("%d\n", array[counter]);
		mid_value = low + (high -low) / 2;
		if (array[mid_value] == value)
		{
			return (mid_value);
		}
		if (array[mid_value] < value)
		{
			low = mid_value + 1;


		}
		else
	       	{
			high = mid_value - 1;
		}




	}
return (-1);
}
