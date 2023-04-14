#include <stdlib.h>

/**
 *_realloc - a reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1;
char *previous_ptr;
unsigned int counter;

if (new_size == old_size)

return (ptr);
if (new_size == 0 && ptr)

{

free(ptr);

return (NULL);

}
if (!ptr)
return (NULL);
previous_ptr = ptr;
if (new_size < old_size)
{
for (counter = 0; counter < new_size; counter++)
ptr1[i] = previous_ptr[i];
}

if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
ptr1[i] = previous_ptr[i];
	}
free(ptr);
return (ptr1);
}

