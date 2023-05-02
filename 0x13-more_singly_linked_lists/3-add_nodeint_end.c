#include "lists.h"

/**
*add_nodeint_end - a function that add a niode to the end
*@n: a member data of a set
*@head: a double pointer that has the address of first node
*Return:the address of new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *endNode = malloc(sizeof(listint_t));

listint_t *temporalNode = *head;

if (endNode == NULL)
{
return (NULL);
}

endNode->n = n;

endNode->next = NULL;


if (*head == NULL)
{
*head = endNode;
return (endNode);
}

while (temporalNode->next)
{
temporalNode = temporalNode->next;
}
temporalNode->next = endNode;
return (endNode);

}
