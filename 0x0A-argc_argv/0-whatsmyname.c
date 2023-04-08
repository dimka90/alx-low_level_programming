#include <stdio.h>
/**
*main - Entry point , it also print the name of the
*(file enterd on the command line)
*@argc: Keeps count of the command enterd on the shell
*@argv: A pointer variable that stores
*( the command entered as string)
*Return: Always 0(Succes)
*/
int main(int  argc, char *argv[])
{

printf("%s\n", argv[0]);


return (0);
}
