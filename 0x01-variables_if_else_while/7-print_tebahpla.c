#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int number;

for (number = 'z'; number >= 'a'; number--)
{
putchar(number);
}
putchar('\n');

return (0);
}
