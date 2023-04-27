#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -a function that  adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{

int length;
list_t *new;

for (length = 0; str[length] != '\0';)
{
length++;
}

new = malloc(sizeof(list_t));
if (new == NULL)
	return (NULL);

new->str = strdup(str);
new->len = length;
new->next = (*head);
(*head) = new;

return (*head);
}
