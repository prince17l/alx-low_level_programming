#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - is the main function
 * @width: is a variable wit type int
 * @height: is a variable with type int
 * Return: 2d array
 */
int **alloc_grid(int width, int height)
{
	int **twodarray;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	twodarray = malloc(sizeof(int) * (width * height));
	if (twodarray == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			twodarray[i][j] = 0;
		}
	}
	return (twodarray);
}
