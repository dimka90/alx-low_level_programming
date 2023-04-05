/**
*_strlen_recursion - count number of letters
*@s: a pointer variable
*Return: 0 for null character and a recursive call to itself plus 1
*/
int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return  (0);
}
else
{


return (1 + _strlen_recursion(s + 1));
}
}
