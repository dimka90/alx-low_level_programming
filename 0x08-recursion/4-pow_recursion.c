/**
*_pow_recursion - exponential function
*@x: stored the base value
*@y: stored the raise to the power
*Return: -1 for nehative, 1 for 0 and recursive call for any positive integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{

return (-1);
}

else if (y == 0)
{

return (1);
}

else
{
return (x * (_pow_recursion(x, y - 1)));
}
}
