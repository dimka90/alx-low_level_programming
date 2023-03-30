#include <stdio.h>
/**
**cap_string - capitalise each letter followed by special character
*@s: stored a pointer variable to the string
*
*Return: Pointer string
*/

char *cap_string(char *s)
{

int counter;

for (counter = 0; counter != '\0'; counter++)
{

if (s[counter] >= 'a' || s[counter] <= 'z')
{
if (s[counter - 1] == ' ' || s[counter - 1] == '\t' || s[counter - 1] ==  '\n'
|| s[counter - 1] == ','
|| s[counter - 1] == ';' || s[counter - 1] == '.' || s[counter - 1] == '!'
|| s[counter - 1] == '?'
|| s[counter - 1] == '"' || s[counter - 1] == '(' || s[counter - 1] == ')'
|| s[counter - 1] == ')'
|| s[counter - 1] == '{' || s[counter - 1] == '}')
{
s[counter] = s[counter] - 32;
}
}

}

return (s);

}
