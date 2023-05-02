#include "lists.h"
/**
*insert_nodeint_at_index - a function that inserts a node
*at a specific position
*@head: a double function pointer
*@idx:an int vairable that specify the position to insert a node
*@n: the data member of the  struct
*Return: a null if error occurs or a new address of a node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temporalNode;
listint_t *newNode;
unsigned int counter;
temporalNode = *head;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL || head == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (idx == 0)
{
/** change the direction of head to point to the new node **/
newNode->next = *head;
*head = newNode;
return (newNode);
}
counter = 0;
while (newNode != NULL && counter < idx)
{
if (counter == idx - 1)
{
newNode->next = temporalNode->next;
temporalNode->next = newNode;
return (newNode);
}
else
{
temporalNode = temporalNode->next;
}
counter++;
}
return (NULL);
}

