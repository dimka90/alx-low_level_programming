#include "main.h"
/**
*print_binary - a function that prints the binary equavalent of a number
*@n:a unsigned long int to  be printed in binary equavalent
*
*/

void print_binary(unsigned long int n)
{
/** Declaring variables **/
int usignedInt_size;
int counter;
unsigned long int bit;

/** initialising  variable **/

counter = 0;
/** 64 is the size of bit used to store usigned long int **/
for (usignedInt_size = 63; usignedInt_size >= 0; usignedInt_size--)
{
bit = n >> usignedInt_size;

if (bit & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
