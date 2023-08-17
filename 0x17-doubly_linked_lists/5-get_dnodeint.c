#include "lists.h"
/**
* get_dnodeint_at_index -that returns the nth node of a dlistint_t linked list
*@head: a pointer to the start of the list
*@index:element to return
*
* Return: The value  of the element
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count;
dlistint_t *headcopy = head;
for (count = 0; headcopy != NULL && count < index; count++)
{
headcopy = headcopy->next;
}
if (headcopy)
	return (headcopy);
return (NULL);
}
