#include "lists.h"
/**
 * reverse_listint - a function that reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previousNode;
listint_t *nextNode;

/** intialisation **/
previousNode = 0;
nextNode = 0;
while (*head)
{
nextNode = (*head)->next;
(*head)->next = previousNode;
previousNode = *head;
*head = nextNode;
}

*head = previousNode;

return (*head);
}
