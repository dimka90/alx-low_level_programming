/**
*factorial - Calculate the factorialm of a number
*@n: Number to computer factorial
*Return: 0 for error, 1 for n=1, and recursive for any integer greater than 1
*/
int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}

return (n * factorial(n - 1));
}
