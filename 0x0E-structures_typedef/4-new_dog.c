#include <stdlib.h>
#include "dog.h"
/**
*str_len - return the length of a string
*@str:pointe to string
*Return: length of string
*/
int str_len(char *str)
{
int counter;
for (counter = 0; str[counter] != '\0';)
{
counter++;
}
return (counter);
}
/**
*cp_str - a function to copy a string to another including null terminator
*@destination: pointer to be copied to
*@source: pointer to copy from
*Return: a newly copy string
*/

char *cp_str(char *destination, char *source)
{

int source_len;

int counter;
/**  calling the str_len function to count char */
source_len =  str_len(source);

counter = 0;
while (counter < source_len)
{
destination[counter] = source[counter];

counter++;
}

/** adding a null character to the destinatio string */
destination[counter] = '\0';

return (destination);
}



/**
* new_dog- a function that create a new dog
*@name: name of dog
*@age: age of dog
*@owner: name of dog owner
*Return: newly created dog_t type
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
/** calling the str_len to count the number of char in name string */
int len_name = str_len(name);
/** calling the str_len to count the number of char in the owner string */
int len_owner = str_len(owner);
/** creating a new dog in dynamic memory */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
/** storing the dog name */
(*new_dog).name = malloc(sizeof(char) * (len_name + 1));
/** checking if the dog's name was stored successfully */
if ((*new_dog).name == NULL)
{
free(new_dog);
return (NULL);
}
/** store dog owner name  with '\0' char inclusive */
(*new_dog).owner = malloc(sizeof(char) * (len_owner + 1));
if ((*new_dog).owner == NULL)
{
free(new_dog);
free((*new_dog).name);
return (NULL);
}
/** copying content to to the new;y created memory for dog name and owner  */
cp_str((*new_dog).name, name);
cp_str((*new_dog).owner, owner);

(*new_dog).age = age;

return (new_dog);
}


