#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*print_dog - a function that prints a struct dog
*@d: a pointer that points to a dog struct
*/
void print_dog(struct dog *d)
{

if (d == NULL)
{
return;
}
else if ((*d).name == NULL)
{

(*d).name = "(nil)";
}
else if ((*d).owner == NULL)
{
(*d).owner = "(nil)";
}
else
{
printf("Name:%s\n", (*d).name);
printf("Age:%f\n", (*d).age);
printf("Owner:%s\n", (*d).owner);

}

}
