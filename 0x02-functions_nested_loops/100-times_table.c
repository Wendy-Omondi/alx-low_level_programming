#include "holberton.h"
/**
* print_times_table - Prints the n times table
*@n: integer
* Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int i;

if (n >= 15 || n < 0)
{
_putchar(0);
}
for (i = 0; i <= n; i++)
{
_putchar(i);
}
}
