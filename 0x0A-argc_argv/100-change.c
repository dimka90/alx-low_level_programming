#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -Entry point taht  prints the minimum number of coins to
 * make change for an amount of money
 * @cmd_line_counter: takes a int and store
 * @cmd_line_argument: array of arguments
 *
 * Return: 1 for Error and 0 for Sucess
 */
int main(int cmd_line_counter, char *cmd_line_argument[])
{
int  counter;

int toNumber;

int balance;

int availableCoins[5] = {25, 10, 5, 2, 1};

	if (cmd_line_counter != 2)
	{
		printf("Error\n");
		return (1);
	}

	toNumber = atoi(cmd_line_argument[1]);
	balance = 0;

	if (toNumber < 0)
	{
		printf("0\n");
		return (0);
	}

	for (counter = 0; counter < 5 && toNumber >= 0; counter++)
	{
		while (toNumber >= availableCoins[counter])
		{
			balance++;
			toNumber -= availableCoins[counter];
	}
	}

	printf("%d\n", balance);
	return (0);
}
