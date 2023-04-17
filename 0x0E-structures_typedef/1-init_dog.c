#include "dog.h"
/**
* init_dog - a function that initialize a variable of type struct dog
*@d: a pointer to a dog structure
*@name: a pointert taht store the name  of the dog
*@age: a float type that  store the age of the dog
*@owner: a char type that stored the name of the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

(*d).name = name;
(*d).age = age;
(*d).owner = owner;



}
