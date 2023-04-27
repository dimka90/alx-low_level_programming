#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a linked list
 * @h:a  variable pointer that to the list_t list to print*
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t length;

for (length = 0; h !=  NULL; length++)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);
h = h->next;
}

return (length);
}
