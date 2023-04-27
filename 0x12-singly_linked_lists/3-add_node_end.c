#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that  adds a new node at the end of a linked list
 * @head: a  double pointer to the list_t list
 * @str: a pointer variable string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
int length;
list_t *new;
list_t *temp_node = *head;


for (length = 0; str[length] != '\0';)
{
length++;
}

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

new->str = strdup(str);
new->len = length;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp_node->next)
	temp_node = temp_node->next;

temp_node->next = new;
return (new);
}
