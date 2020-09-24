#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
*@n: the number of times the character \ should be printed
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int w, a, o;
w = 1;
a = 0;
while (n <= 0)
{
for (o = 0; o < w; o++)
{
if (n > 0)
_putchar('\n');
}
_putchar(o < a ? ' ' : '\\');
}
w++;
a++;
n--;
}
