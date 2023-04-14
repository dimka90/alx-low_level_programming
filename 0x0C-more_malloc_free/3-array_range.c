#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)

{
int *int_ptr;

int counter;
int array_size;

if (min > max)
return (NULL);

array_size = max - min + 1;


int_ptr = malloc(sizeof(int) * array_size);

if (int_ptr == NULL)
return (NULL);
counter = 0;
while (min <= max)
{
int_ptr[counter] = min++;
counter++;
}
return (int_ptr);
}


