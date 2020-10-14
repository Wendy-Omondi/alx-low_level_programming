#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid - pointer to two dimensional array
 *
 *@width: array width
 *
 *@height: array height
 *
 *Return: double pointer
 */
int **alloc_grid(int width, int height)
{
int **g;
int i, j;

if (width <= 0 || height <= 0)
return (0);

g = (int **)malloc(sizeof(int *) * height);

if (!g)
return (0);

for (i = 0; i < height; i++)
{
g[i] = malloc(sizeof(int) * width);

if (!g[i])
{
while (i--)
free(g[i]);
free(g);

return (0);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
g[i][j] = 0;

return (g);
}
