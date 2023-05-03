#include "lists.h"

/**
 * find_listint_loop -a function  finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slowNode = head;
listint_t *fastNode = head;

if (!head)
	return (NULL);

while (slowNode && fastNode && fastNode->next)
{
fastNode = fastNode->next->next;
slowNode = slowNode->next;
if (fastNode == slowNode)
{
slowNode = head;
while (slowNode != fastNode)
{
slowNode = slowNode->next;
fastNode = fastNode->next;
}
return (fastNode);
}
}
return (NULL);
}

