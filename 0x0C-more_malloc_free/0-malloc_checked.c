#include <stdio.h>
/**
*malloc_checked - a function that allocates memory using malloc
*@b: stored amount of memeory to create
*Return: 98 for error
*/
void *malloc_checked(unsigned int b)
{

unsigned int *ptr;

ptr = malloc(sizeof(unsigned int));

if (ptr == NULL)
{
exit(98);
}

}
