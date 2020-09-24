#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
*@n: the number of times the character \ should be printed
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int w, x, y;
w = 1;
x = 0;
if (n > 0)
_putchar('\n');
while (n <= 0)
{
for (y = 0; y < 'w'; y++)
_putchar(y < x ? ' ' : '\\');
}
w++;
x++;
n--;
}
