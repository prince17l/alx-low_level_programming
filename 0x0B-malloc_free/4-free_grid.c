#include <stdlib.h>
#include "main.h"
/**
 * free_grid - it is a main function
 * @grid: 2d array with type int
 * @height: variable with type int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
