#include "holberton.h"
/**
* print_triangle - Prints a triangle
*@size: size of the triangle
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
int w, y;
y = size;

if (size <= 0)
{
_putchar('\n');
}
while (size > 0)
{
for (w = 0; w < y; w++)
_putchar((w < size - 1) ? ' ' : '#');
_putchar('\n');
size--;
}
}
