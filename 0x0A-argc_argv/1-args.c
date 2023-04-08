#include  <stdio.h>

/**
*main - a program that prints the number of arguments passed into it
*@count: keeps count of command line argument
*@cmd_line_argument:a pointer variable that stored cmd argument in an array)
*@count:
*Return: Always 0(Succes)
*/
int main(int count, char *cmd_line_argument[])
{
(void)cmd_line_argument;
printf("%d\n", count);

return (0);
}
