#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *
 *@min: first value in array
 *
 *@max: last value in array
 *
 *Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *a, i, s;

if (min > max)
return (NULL);

s = max - min + 1;

a = malloc(sizeof(int) * s);

if (a == NULL)
return (NULL);

for (i = 0; i < s; i++)
a[i] = min++;

return (a);
}
