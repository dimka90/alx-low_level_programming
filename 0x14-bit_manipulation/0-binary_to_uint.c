#include <stdio.h>
#include <stdlib.h>
/**
*binary_to_uint - a function that convert a binary number to unsigned int
*@b: a pointer variable to binary digit
*Return: 0 for error and an int for success
*/
unsigned int binary_to_uint(const char *b)
{
/** declaring variables **/
unsigned int unsigned_num;
int counter;
int binary;
/**Assignig values to variable **/

unsigned_num = 0;

counter = 0;

binary = 2;
/** checking for null character **/
if (b == NULL)
{
return (0);
}

for (counter = 0; b[counter]; counter++)
{
if (b[counter] < '0' || b[counter] > '1')
{
return (0);
}
/** 48 is the  ascii  value for 0 **/
unsigned_num = (binary *unsigned_num + (b[counter] - 48));
}

return (unsigned_num);
}
