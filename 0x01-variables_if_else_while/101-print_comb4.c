#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_digit;

int second_digit;

int third_digit;

for (first_digit = 0; first_digit < 10; first_digit++)
{
for (second_digit = 1; second_digit < 10; second_digit++)
{
for (third_digit = 2; third_digit < 10; third_digit++)
{
if (first_digit < second_digit && second_digit < third_digit)
{
putchar('0' + first_digit);
putchar('0' + second_digit);
putchar('0' + third_digit);
if (first_digit + second_digit + third_digit  != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
