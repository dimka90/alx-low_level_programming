#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list in heap
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{

listint_t *temporalNode;

if (head == NULL)
return;

while (*head)
{
temporalNode = (*head)->next;
free(*head);
*head = temporalNode;
}
*head = NULL;
}

