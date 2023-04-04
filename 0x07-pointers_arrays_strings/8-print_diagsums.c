#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int total_1,

int total_2;

int  counter;

	total_1 = 0;
	total_2 = 0;

	for (counter = 0; counter < size; counter++)
	{
		total_1 = total_1 + a[counter * size + counter];
	}

	for (counter = size - 1; counter >= 0; counter--)
	{
		total_2 = total_2 + a[counter * size + (size - counter - 1)];
	}

	printf("%d, %d\n", total_1, total_2);
}

