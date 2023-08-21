/**
 * mod - Calculates the remainder of integer division
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Return: Remainder of division
 */
int mod(int a, int b)
{
if (b == 0)
{
return (0);
}
return (a % b);
}
