#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - frees a previous two dimensional grid
 *
 *@grid: double pointer
 *
 *@height: height of grid
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
