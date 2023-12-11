#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
size_t counter;
(void)value;

for (counter = 0; counter < size; counter++)
{
	printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);
}


return (0);
}
