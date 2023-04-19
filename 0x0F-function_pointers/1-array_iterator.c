#include <stddef.h>
/**
*array_iterator - a function that execute an array function
*@array:stored pointer to an array
*@size:stored array size
*@action: action to be performed on an array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t counter;

if (array == NULL || action == NULL)
{
return;
}
for (counter = 0; counter < size; counter++)
{
action(array[counter]);

}

}
