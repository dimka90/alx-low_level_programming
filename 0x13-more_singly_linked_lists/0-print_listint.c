     #include "lists.h"

/**
* print_listint - a function that prints the element of a list
*@h: a pointer variable that holds the address of the list parameter
*Return:number of nodes found in the list
*/
size_t print_listint(const listint_t *h)
{

const listint_t *temporal = h;

size_t count = 0;
while (temporal != NULL)
{
printf("%d\n", temporal->n);
count++;
temporal = temporal->next;

}

return (count);
}
