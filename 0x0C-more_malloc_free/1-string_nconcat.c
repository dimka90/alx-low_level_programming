/**
*
*/
#include <stdlib.h>


int str_len(char *s)
{
int counter;
for (counter = 0; s[counter] != '\0'; counter++);

return (counter);
}


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int str1_len;
unsigned int str2_len;

int counter;

unsigned int counter2;

char *new_stringPointer;

if (s1 == NULL)
{
str1_len = 0;
s1 = "";
}

if (s2 == NULL)
{
str2_len = 0;
s2 = "";
}

else
{
str1_len = str_len(s1);

}
/*calling dimka len function*/

str2_len = str_len(s2);

/**
*checking if n is greater than or equals to the
*length of the string to be copied
*/

if (n >= str2_len)
{
n = str2_len;
}

new_stringPointer = malloc
(sizeof(char) *
(str1_len + str2_len + 1));

if (new_stringPointer == NULL)
{
return (NULL);
}
/*copying the  first string to the new array created memory*/
for (counter = 0; counter < str1_len; counter++)
{
new_stringPointer[counter] = s1[counter];
}

/*appending the second string to the new array created memory */

for (counter2 = 0; counter2 < str2_len; counter2++)
{
new_stringPointer[counter] = s2[counter2];
counter++;
}

new_stringPointer[counter] = '\0';
return (new_stringPointer);
}

