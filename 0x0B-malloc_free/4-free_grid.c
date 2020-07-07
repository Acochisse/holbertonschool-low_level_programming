#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free a 2d grid
 * @grid: pointer to grid
 * @height: desired grid height
 *
 * Return: grid
 */

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
