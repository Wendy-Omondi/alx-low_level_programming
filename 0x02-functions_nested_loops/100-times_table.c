#include "holberton.h"
/**
* print_times_table - Prints the n times table
*@n: integer
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int x, y, prod;

if (n >= 15 || n < 0)
{
_putchar(0);
}
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
if (y == 0)
{
_putchar(48);
continue;
}
}
}
prod = x * y;
_putchar(',');
_putchar(' ');

if (prod >= 100)
{
_putchar(prod / 100 + 48);
_putchar(prod / 10 + 48);
_putchar(prod % 10 + 48);
}
else if (prod >= 10)
{
_putchar(prod / 10 + 48);
_putchar(prod % 10 + 48);
}
else
{
_putchar(prod);
}
}
