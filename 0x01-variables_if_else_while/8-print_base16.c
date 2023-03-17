#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number;

int letter;

for (number = 0; number <= 9; number++)
{
putchar('0' + number);
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);

}
return (0);
}
