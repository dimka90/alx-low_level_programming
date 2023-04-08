#include <stdio.h>
/**
*main - Entry point , it also print the name of the
*(file enterd on the command line)
*@count: Keeps count of the command enterd on the shell
*@cmd_line_command: A pointer variable that stores
*( the command entered as string)
*Return: Always 0(Succes)
*/
int main(int  count, char *cmd_line_command[])
{

printf("%s\n", cmd_line_command[0]);


return (0);
}
