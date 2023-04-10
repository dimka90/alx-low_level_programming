#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*
*/
int main(int cmd_arg_counter,char *cmd_line_arg[])
{

if (cmd_arg_counter == 1)
{
printf("0\n");
}
else{
int counter;
int sum=0;
for (counter = 0; counter < cmd_arg_counter; counter++)
{
if ( _isdigit(cmd_line_arg[counter]))
{
sum=sum+atoi(cmd_line_arg[counter]);
}
}
}
return (0);
}

