#include "main.h"
#include <stdlib.h>
/**
 * free_grid - is the main function
 * @grid: is a pointer to 2d array
 * @height: is a variable with type int
 * Return: 2d array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free (grid[i]);
	}
	free(grid);
}
