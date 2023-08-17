#include "lists.h"
/**
*sum_dlistint -returns the sum of all the data (n) of a dlistint_t linked list.
*@head: pointer to the start of a doubly link list
*
*Return: sum of the element in a list
*/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *headcopy = head;
int sum = 0;
if (head == NULL)
{
return (0);
}
while (headcopy != NULL)
{
sum = sum + headcopy->n;
headcopy = headcopy->next;
}

return (sum);
}
