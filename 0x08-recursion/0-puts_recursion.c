#include <stdio.h>
/**
*_puts_recursion - a function that prints a string, followed by a new line
*@s: a pointer vairable to the string passed to the function
*
*/
void _puts_recursion(char *s)
{

while (*s !='\0')
{
printf("%c", *s);
s++;
}
printf("\n");
}
