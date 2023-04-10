#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int _isdigit(char *cmd_arg)
{
int counter;

for (counter = 0; counter < strlen(cmd_arg); counter++)
{
if(!isdigit(*(cmd_arg+counter)))
{
printf("Error\n");
return (0);
}
else
{
return (1);
}

}
}
