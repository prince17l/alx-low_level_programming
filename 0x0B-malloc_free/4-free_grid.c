#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - it is a main function
 * @width: variable with type int
 * @height: variable with type int
 * Return: int
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i ++)
	{
		free(grid[i]);
	}
}
