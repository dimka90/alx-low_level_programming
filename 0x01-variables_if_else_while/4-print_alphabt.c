#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Succes)
*/
int main(void)
{
for (int i = 'a'; i <= 'z'; i++)
{
if ((i == 'q') || (i == 'e'))
{
continue;
}
putchar(i);
}
putchar('\n');

return (0);
}
