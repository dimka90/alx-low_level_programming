#include "main.h"
/**
* more_numbers- Using a nested for loop to print numbers in row and column
*
*/
void more_numbers(void)
{
int row;

int column;

for (row = 1; row <= 10; row++)
{
for (column = 0; column <= 14; column++)
{
if (column >9)
{

_putchar((column / 10) + '0');
}
_putchar('0' + (column % 10));
}
_putchar('\n');
}
}
