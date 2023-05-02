#include "lists.h"

/**
*pop_listint - a function that delete a node
*@head: a address to the  first element of the list
*Return: the data deleted
*/

int pop_listint(listint_t **head)
{
int value = 0;
listint_t *temp;

if (*head == NULL)
{
return (0);
}
temp = *head;
value = temp->n;
*head = (*head)->next;
free(temp);

return (value);
}
