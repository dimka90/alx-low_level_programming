#include <stdlib.h>
/**
*malloc_checked - a function that allocates memory using malloc
*@b: stored amount of memeory to create
*Return: 98 for error
*/
void *malloc_checked(unsigned int b)
{

unsigned int *pointer;

pointer = malloc(b);

if (pointer == NULL)
{
exit(98);
}
return (pointer);
}
