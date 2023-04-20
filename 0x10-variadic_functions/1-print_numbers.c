#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - a function that prints numbers, followed by a new line
*@separator: pointer to sperate numbers
*@n:number of array
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned  int counter;

va_list numbers;

if (separator == NULL)
{
separator = "";
}

va_start(numbers, n);


for (counter = 0; counter < n; counter++)
{
printf("%d", va_arg(numbers, int));

if (n == counter + 1)
{

break;
}
printf("%s", separator);
}
printf("\n");
}

