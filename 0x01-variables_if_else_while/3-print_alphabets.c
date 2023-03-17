#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int lowerCase;

int upperCase;

for (int lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}

for (int upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}
putchar('\n');
return (0);
}
