#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*@cmd_agr_counter: counts cmd argument
*@cmd_line_arg: a pointer variable that stored cmd arguments
*
*Return:1 for Errot and 0 for success
*/
int main(int cmd_agr_counter, char *cmd_line_arg[])
{
int multiply;

if (cmd_agr_counter != 3)
{
printf("Error\n");

return (1);
}
else
{
multiply = atoi(cmd_line_arg[1]) * atoi(cmd_line_arg[2]);

printf("%d\n", multiply);
}

return (0);
}
