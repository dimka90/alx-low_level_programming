#include <stdio.h>
/**
*main - a program that prints all arguments it receives
*@count: stored count of argument passed
*@cmd_line_argument: a pointer variable that stored cmd argument in array
*Return: Always 0(Success)
*/
int main(int count, char *cmd_line_argument[])
{

int counter;

for (counter = 0; counter < count; counter++)

{

printf("%s\n", cmd_line_argument[counter]);


}


return (0);

}
