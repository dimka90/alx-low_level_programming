#include "main.h"
#include <stdio.h>
/**
*binary_to_uint - a function that convert an interger to binary
*@b:a pointer vairable that points to an array of binary strings
*Return:a converted interger
*/
unsigned int binary_to_uint(const char *b)
{
int counter;
int binary = 2;
unsigned int unsigned_int = 0;

if (b == NULL)
{
return (0);
}
for (counter = 0; *(b + counter); counter++)
{
if (*(b + counter) < '0' || (*(b + counter)) > '1')
{
return (0);
}
unsigned_int = binary * unsigned_int + (*(b + counter) - '0');
}
return (unsigned_int);
}
