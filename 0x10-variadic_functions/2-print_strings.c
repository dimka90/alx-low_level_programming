#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - a function that prints strings, followed by a new line
*@separator: comma for separation
*@n:number of element in  to check
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;

char *ptr_string;

unsigned int counter;

if (separator == NULL)
{
separator = "";
}

va_start(strings, n);

for (counter = 0; counter < n; counter++)
{

ptr_string = va_arg(strings, char*);
printf("%s", ptr_string);
if (n == counter + 1)
{
break;
}
printf("%s", separator);
}


printf("\n");
}
