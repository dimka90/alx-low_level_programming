#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strenlen - a function that returns the lenght of string
*@string: a pointer variable
*
*Return: length of string
*/
int _strenlen(char *string)
{
int counter;
for (counter = 0; string[counter] != '\0';)
{
counter++;
}
return (counter);

}
/**
*str_concat - a function that concantenate string
*@s1: pointer to string
*@s2: pointer to string
*Return: NULL for error or char to a pointer
*/
char *str_concat(char *s1, char *s2)
{
int strlen1 = _strenlen(s1);
int strlen2 = _strenlen(s2);

int counter2;
int counter3;

char *newStr;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
newStr = malloc(sizeof(char) * (strlen1 + strlen2 + 1));

if (newStr == NULL)
{
return (NULL);
}
for (counter2 = 0; s1[counter2] != '\0'; counter2++)
{

newStr[counter2] = s1[counter2];
}


for (counter3 = 0; s2[counter3] != '\0'; counter3++)
{

newStr[counter2] = s1[counter3];
counter2++;
}
newStr[counter2] = '\0';

return (newStr);
}

