#include <stdlib.h>
/**
*create_array -  a function that creates an array of chars
*and initializes it with a specific char
*@size:a positive interger that specific the amount of memory to allocate
*@c:The character to fill to memory
*Return: NULL for size 0 and a char pointer for other numbers
*/
char *create_array(unsigned int size, char c)
{

unsigned int  counter;

char *array = malloc(sizeof(char) * size);

if (size <= 0 || array == 0)
{
return (NULL);
}
else
{
for (counter = 0; counter < size; counter++)
{

array[counter] = c;
}

return (array);
}

}
