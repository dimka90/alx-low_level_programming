#include <stddef.h>

/**
*int_index - a function that searches for an integer in an array for a match.
*@array:stored array of numbers to be compared
*@size: number of element in an array
*@cmp:a fuction pointer that store the address of the pass in pointer
*Return: -1 for NULL or  Error and a int type if match found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int counter;
if (array == NULL || cmp == NULL)
{
return (-1);
}

if (size <= 0)
{


return (-1);
}

for (counter = 0; counter < size; counter++)
{
if (cmp(array[counter]))
{
return (counter);
}
}
return (-1);
}

