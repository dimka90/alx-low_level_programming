#include "lists.h"
/**
* delete_nodeint_at_index - a funciton that
*deletes a node in a linked list at a certain index
* @head: a double pointer to the first element in the list
* @index: index of the node to delete
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temporalNode = *head;
listint_t *currentNode = NULL;
unsigned int counter = 0;

if (*head == NULL)
{
	return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(temporalNode);
return (1);
}

while (counter < index - 1)
{
if (!temporalNode || !(temporalNode->next))
	return (-1);
temporalNode = temporalNode->next;

counter++;
}
currentNode = temporalNode->next;
temporalNode->next = currentNode->next;
free(currentNode);

return (1);
}
