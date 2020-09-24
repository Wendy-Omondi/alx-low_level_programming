#include "holberton.h"
/**
* print_line - Draws a straight line in the terminal
*@n: number of times the character _ should be printed
* Return: Always 0 (Success)
*/
void print_line(int n)
{
int w;
for (w = 0; w < n; w++)
{
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
