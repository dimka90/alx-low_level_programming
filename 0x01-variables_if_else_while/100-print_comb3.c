#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int first_digit;

	int second_digit;

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		for (second_digit = 1; second_digit < 10; second_digit++)
		{
			if (first_digit < second_digit && first_digit != second_digit)
			{
			putchar('0' + first_digit);
			putchar('0' + second_digit);
			if (first_digit + second_digit != 17)
			{
			putchar(',');
			putchar(' ');
		}
		}
	}
	}

	putchar('\n');

	return (0);
}
