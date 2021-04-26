#include "holberton.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
*@n: the number of times the character \ should be printed
* Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
int num;
int space;

num = 0;


if (n <= 0)
{
_putchar('\n');
}

while (num < n)
{
for (space = 0; space < num; space++)
{
_putchar(' ');
}
_putchar(92);
_putchar('$');
_putchar('\n');
num++;
}
}
