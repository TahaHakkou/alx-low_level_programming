#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: a pointer to the array,
 *	   and NULL if width or height aren't positive
 *	   or allocation not successful
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(width * height * sizeof(int));
	if (grid != NULL)
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}
	return (grid);
}
