#include <stdio.h>
/**
* main - Entry Point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int counter;

for (counter = 1; counter <= 100; counter++)
{
if (counter % 3 == 0)
{
printf("Fizz");

}
else if (counter % 5 == 0)
{
printf("Buzz");
}
else if (counter % 3 == 0 && counter % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", counter);
}
if (counter != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
