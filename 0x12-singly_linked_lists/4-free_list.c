#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that  frees a linked list
 * @head: a list_t list variable to be freed
 */
void free_list(list_t *head)
{
list_t *temp_node;
while (head)
{
temp_node = head->next;
free(head->str);
free(head);
head = temp_node;
	}
}
