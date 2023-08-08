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
	int i, j;
	int width;
	int size;

	size = sizeof(grid) - (sizeof(int *) * height);
	width = size / sizeof(int);
	for (j = 0; j < width; j++)
	{
		free(grid[j]);
	}
}
