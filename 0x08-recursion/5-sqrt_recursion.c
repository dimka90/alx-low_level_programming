/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int sqrt_recursion(int number, int counter)
{
	if (counter * counter > number)
		return (-1);
	if (counter * counter == number)
		return (counter);
	return (sqrt_recursion(number, counter + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (sqrt_recursion(n, 0));
}
}
/**
 *sqrt_recursion - recurses to find the natural
 * square root of a number
 * @number: number to calculate the sqaure root of
 * @counter: counter variable
 * Return: -1 for negative numbers and a recursive call
 */
