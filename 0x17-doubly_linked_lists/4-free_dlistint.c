#include "lists.h"
/**
*free_dlistint - free the linked list
*@head: head pointer vairable
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *headcopy = head;

while (headcopy != NULL)
{
dlistint_t *tempt = headcopy;
headcopy = headcopy->next;
free(tempt);
}
}
