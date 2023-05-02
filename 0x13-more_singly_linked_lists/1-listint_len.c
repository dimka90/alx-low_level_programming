#include "lists.h"
/**
*listint_len - a function that returns the number of nodes
*@h:a pointer variable that store the address of the head passed to it
*Return: the number of nodes in a list
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
while (h != NULL)

{
count++;
h = h->next;
}

return (count);
}
