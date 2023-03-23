#include "main.h"
/**
* print_line -  a function that draws a straight line in the terminal
*@n: a parameter that stored the inputed integer
*/
void print_line(int n)
{
int counter;

if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
for (counter = 1; counter <= n; counter++)
{
_putchar('_');
}
}

}
