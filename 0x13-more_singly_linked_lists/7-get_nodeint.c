#include "lists.h"
/**
*get_nodeint_at_index - a function that returns
*the address of a node found in a list
*@head: a pointer to the first node on the list
*@index: a varible to check
*Return: a null  for error or a new node for success
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *temporalNode = head;
unsigned int counter;

counter = 0;


while (temporalNode != NULL)
{

if (counter == index)
{
return (temporalNode);
}

counter++;
temporalNode = temporalNode->next;
}



return (NULL);
}
