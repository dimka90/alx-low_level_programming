#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  function that frees a 2 dimensional grid
*previously created by your alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description:using thr free function to frees memory of grid
 * Return: void
 *
 */
void free_grid(int **grid, int height)
{
	int counter;

	counter = 0;

	while (counter < height)
	{
		free(grid[counter]);
	counter++;
}
	free(grid);
}
