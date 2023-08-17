#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*@head: pointer to the head dlist
*@n:element to insert in a doubly linked list
*
* Return: the address of the newly created list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *headcopy = *head;
dlistint_t *tempt = malloc(sizeof(dlistint_t));
if (tempt == NULL)
{
return (NULL);
}
tempt->n = n;
tempt->next = NULL;
tempt->prev = NULL;

if (headcopy == NULL)
{
*head = tempt;
return (tempt);
}
while (headcopy->next != NULL)
{
headcopy = headcopy->next;
}

headcopy->next = tempt;
tempt->prev = headcopy;
return (tempt);
}
