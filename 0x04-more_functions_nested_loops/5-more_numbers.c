#include "main.h"
/**
* more_numbers- Using a nested for loop to print numbers in row and column
*
*/
void more_numbers(void)
{
int row;

int column;

for (int row = 1; row <= 10; row++)
{
for (int column = 0; column <= 14; column++)
{
_putchar('0' + column);
}
_putchar('\n');
}
_putchar('\n');
}
