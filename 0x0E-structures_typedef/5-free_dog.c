#include  <stdlib.h>
#include "dog.h"

/**
*free_dog - a function frees dogs(dynamic memory)
*@d: pointer to dog struct to free
*/

void free_dog(dog_t *d)
{

if (d != NULL)
{
free((*d).name);
free((*d).owner);
free(d);
}

}
