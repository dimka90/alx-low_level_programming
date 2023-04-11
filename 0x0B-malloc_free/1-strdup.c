#include <stdlib.h>
/**
*_strdup - a function that returns a pointer to a
*newly allocated space in memory,
*which contains a copy of the string given as a parameter
*@str: the string to copy
*Return: NULL for error or a char pointer
*/
char *_strdup(char *str)
{

int innercounter;

int counter;

char *copychar;

if (str == NULL)
{

return (NULL);

}

/* this for loop count the number of string entered*/
;

for (counter = 0; str[counter] != '\0'; counter++){

}


copychar = malloc(sizeof(char) * counter + 1);
/* this create a dynamic memory for the length of string plus null character*/


if (copychar == NULL)
{

}
for (innercounter = 0; innercounter <= counter; innercounter++)
{
/* This line copy the content of string to the new memory*/
copychar[innercounter] = str[innercounter];

}

return (copychar);
}




