#include "main.h"
/**
 * print_chessboard -  a function that prints the chessboard
 * @a: a 2 dimensional array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	for (row = 0; row < 8; i++)
	{
		for (column = 0; column < 8; column++)
			_putchar(a[row][column]);
		_putchar('\n');
	}
}
