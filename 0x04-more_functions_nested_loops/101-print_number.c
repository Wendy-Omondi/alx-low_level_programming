#include "holberton.h"
/**
* print_number - Prints integers
*@n: integer
* Return: Always 0 (Success)
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
}
if (n / 10)
{
_putchar(n % 10 + '0');
}
}
