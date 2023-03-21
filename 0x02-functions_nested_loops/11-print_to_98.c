#include "main.h"
/**
* print_to_98 - print all natural numbers to 98
*@n: stored int value
*/
void print_to_98(int n)
{
int i;

for ( i = n; n <=98; n++)
{

_putchar(i+'0');
_putchar(',');
_putchar(' ');
}


}
