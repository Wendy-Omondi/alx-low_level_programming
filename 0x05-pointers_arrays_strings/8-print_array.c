#include "holberton.h"
#include <stdio.h>
/**
* print_array - Prints n elements of an array of integers
*@n: Number of elements of the array to be printed
*@a: array of integers
* Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%i", a[i]);
if (n - i != 1)
printf(", ");
}
printf("\n");
}
