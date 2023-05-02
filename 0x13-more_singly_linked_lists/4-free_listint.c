#include  "lists.h"

/**
*free_listint - a function that frees a listint_t list
*@head: a pointer that store the address of the first node
*/

void free_listint(listint_t *head)
{

listint_t *temporalNode;
while (head)
{

temporalNode = head->next;
free(head);

head = temporalNode;

}
}
