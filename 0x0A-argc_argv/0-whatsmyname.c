#include <stdio.h>
/**
*main - Entry point
*@cmd_line_counter: cmd line counter
*@cmd_line_agr: a pointer variable that stores cmd argument
*Return: Always 0 (Success)
*/
int main(int cmd_line_counter, char *cmd_line_agr[])
{

(void)cmd_line_counter;

printf("%s\n", cmd_line_agr[0]);
return (0);
}
