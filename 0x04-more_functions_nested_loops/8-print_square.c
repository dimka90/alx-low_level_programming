#include "main.h"
/**
*print_square - create square shope using #
*@size: stored the number to create square
*/
void print_square(int size)
{
int outer;

int inner;

for (outer = 0; outer < size; outer++)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (inner = 0; inner < size; inner++)
{
_putchar('#');
}
_putchar('\n');
}

}

}
