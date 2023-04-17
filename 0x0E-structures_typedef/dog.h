#ifndef DOG_H
#define DOG_H
/**
* struct dog - it contains a dog information
*@name: name of dog
*@age: age of dog
*@owner: name of who owns the dog
*/
struct dog
{
char *name;
float age;
char *owner;

};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif