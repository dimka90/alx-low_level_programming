#include <stdio.h>
#include <stdarg.h>
/**
*sum_them_all -  a function that returns the sum of all its parameters
*@n: number of element passed
*Return: 0 for no element and sum of number if passed
*
*/

int sum_them_all(const unsigned int n, ...)
{
va_list number_list;
int list_value;

unsigned int counter;
int sum;
if (n == 0)
{
return (0);
}

va_start(number_list, n);

sum = 0;
list_value = va_arg(number_list, int);
counter = 0;
while (counter < n)
{
sum = sum + list_value;

list_value = va_arg(number_list, int);
counter++;
}
return (sum);
}

