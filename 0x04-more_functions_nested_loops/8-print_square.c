#include "holberton.h"
/**
* print_square - Prints a square
*@size: size of the square
* Return: Always 0 (Success)
*/
void print_square(int size)
{
int w, y;
if (size <= 0)
_putchar('\n');
else
{
for (w = 0; w < size; w++)
{
for (y = 0; y < size; y++)
_putchar('#');
}
_putchar('\n');
}
}
