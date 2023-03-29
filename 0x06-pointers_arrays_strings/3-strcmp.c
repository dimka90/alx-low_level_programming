#include <stdio.h>

/**
*
*/
int _strcmp(char *s1, char *s2)
{
int counter;

for (counter = 0; s1[counter] != '\0' || s2[counter] != '\0'; counter++)
{

if (s1[counter] != s2[counter])
{
printf("%c %c",s1[counter],s2[counter]);
if(s1[counter] > s2[counter])
{

return (s1[counter]);
}

if (s1[counter] < s2[counter])
{

return (-(s2[counter]));
}

}


}
return (0);
}
