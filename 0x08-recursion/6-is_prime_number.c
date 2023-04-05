
/**
 * get_prime - calculates if a number is prime recursively
 * @number: number to evaluate
 * @counter: counter
 *
 * Return: 1 if n is prime, 0 if not
 */
int get_prime(int number, int counter)
{
	if (counter == 1)
		return (1);
	if (number % counter == 0 && counter > 0)
		return (0);
	return (get_prime(number, counter - 1));
}

/**
 * is_prime_number - call to a recursive function to to find for prime numbers
 * @n: number to check if it is prime or not
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}

