#include "holberton.h"
/**
* print_times_table - Prints the n times table
*@n: integer
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int w, x, prod = 0;

if (n >= 0 && n <= 15)
{
for (w = 0; w <= n; w++)
{
for (x = 0; x <= n; x++)
{
prod = w * x;
if (x > 0)
{
_putchar(',');
_putchar(' ');
if (prod < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else if (prod >= 10 && prod < 100)
{
_putchar(' ');
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar('0' + ((prod / 10) % 10));
_putchar((prod % 10) + '0');
}
}
else
_putchar('0' + prod);
}
_putchar('\n');
}
}
}
