#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int remainder = n % 10;

	if (remainder > 5)
	{
	printf("Last digit of %d is %d  and is greater than 5", n, remainder);
	}
	else if (remainder == 0)
	{
	printf("Last digt of %d is %d and is 0", n, remainder);
	}
	return (0);
}
