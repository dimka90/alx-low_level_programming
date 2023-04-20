#include "function_pointers.h"
/**
 * print_name -a  function that print name using pointer to function
 * @name:pointer variable  string to add
 * @f: pointer to function
 * Return:void
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
	return;
f(name);
}
