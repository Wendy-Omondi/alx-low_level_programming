#include "holberton.h"
/**
* times_table - Prints the 9 ties table starting with 0
*
* Return: Always 0 (Success)
*/
void times_table(void)
{
int w, y prod;
for (w = 0; w < 10; w++)
{
for (y = 0; y < 10; y++)
{
if (y == 0)
{
_putchar(48);
continue;
}
prod = w * y;
_putchar(',');
_putchar(' ');
if (prod >= 10)
{
_putchar(prod / 10 + 48);
_putchar(prod % 10 + 48);
}
else
{
_putchar(' ');
_putchar(prod + 48);
}
}
_putchar('\n');
}
}
