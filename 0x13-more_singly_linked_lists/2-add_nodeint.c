#include "lists.h"


/**
*add_nodeint - a function that adds a new node to the beginging of a list
*@n: member data of  the linked list to be created
*@head: a double pointer that points to the first node of the list
*Return: a the address of the newly created node
*/




listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}

newnode->n = n;

newnode->next = *head;

*head = newnode;

return (newnode);
}

