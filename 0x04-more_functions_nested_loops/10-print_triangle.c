#include "holberton.h"
/**
* print_triangle - Prints a triangle
*@size: size of the triangle
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j, k;
for (i = size - 1; i >= 0; i--)
{
for (j = 1; j <= i; j++)
_putchar(' ');
}
for (k = 0; k < (size - i); k++)
{
_putchar('#');
}
_putchar('\n');
}
}
