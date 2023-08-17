#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlistint_t list
*@head: a double pointer to the head pointer
*@n: Element to in the list
*
*Return: address of the new element
*
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tempt = malloc(sizeof(dlistint_t));
if (tempt == NULL)
{
return (NULL);
}
tempt->n = n;
tempt->prev = NULL;
tempt->next = NULL;
if (*head == NULL)
{
*head = tempt;
}
else
{
tempt->next = *head;
(*head)->prev = tempt;
*head = tempt;
}

return (tempt);
}
