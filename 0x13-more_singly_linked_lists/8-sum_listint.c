#include "lists.h"
/**
*sum_listint - a function that calculate
*the all sum of the data values in the list
*@head: a pointer varible to the first node
*Return: 0 for empty list and sum for an empty list
*/

int sum_listint(listint_t *head)
{

listint_t *temporalNode = head;

int sum;

if (temporalNode == NULL)
{
return (0);
}
sum = 0;
while (temporalNode)
{
sum = sum + temporalNode->n;

temporalNode = temporalNode->next;
}


return (sum);

}
