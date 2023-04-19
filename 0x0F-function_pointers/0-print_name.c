#include <stdio.h>
/**
* print_name - a call back function that  print name using pointer function
*Return: empty
*@name: string pointer to store name
*@f:a void function pointer that stores the address of
*the print_name_as_is function
*/
void print_name(char *name, void (*f)(char *))
{
/**checking for NULL character in both name and function pointer */
if (name == NULL || f == NULL)
{
return;
}

/* calling the print_name_as_is function thorough a function pointer */

(*f)(name);







}
