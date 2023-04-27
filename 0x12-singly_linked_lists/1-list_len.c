#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that  returns the number of elements in a linked list
 * @h:a variablle  pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t num_element;

for (num_element = 0; h != NULL; num_element++)
{

h = h->next;

}

return (num_element);

}
