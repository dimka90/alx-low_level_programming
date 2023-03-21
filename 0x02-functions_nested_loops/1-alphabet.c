#include "main.h"
/**
* print_alphabet - print lowercase letters from a to z
*
* Description: print lowercase letters from a to z using a for loop
*/
void print_alphabet(void)
{
int letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
