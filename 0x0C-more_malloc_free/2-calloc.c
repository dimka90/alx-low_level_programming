#include <stdlib.h>
/**
 * *fill_memory - fills memory with a constant byte
 * @string: memory area to be filled
 * @byte: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *fill_memory(char *string, char byte, unsigned int n)
{
	unsigned int counter;
for (counter = 0; counter < n; counter++)
{
string[counter] = byte;
}
return (string);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *new_stringPtr;
int dynamic_mem;

if (nmemb == 0 || size == 0)
return (NULL);
dynamic_mem = size * nmemb;
new_stringPtr = malloc(dynamic_mem);

if (new_stringPtr == NULL)
{
return (NULL);
}
else
{
fill_memory(new_stringPtr, 0, dynamic_mem);
	return (new_stringPtr);
}
}
