#include "main.h"
/**
* print_sign - checks  for sign of an number
* @n: Stored interger value
*
* Description: The function check for for 0,1 or -1
*
* Return: 1 for positive , 0 for 0 and -1 for negetive numbers
*/
int print_sign(int n)
{

if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
_putchar('-');
return (-1);
}
