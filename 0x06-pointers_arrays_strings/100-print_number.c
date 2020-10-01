#include "holberton.h"
/**
* print_number - Prints integer
*@n: number to be printed
* Return: Always 0 (Success)
*/
void print_number(int n)
{
unsigned int u;

if (n < 0)
{
_putchar('-');
u = -n;
}
else
{
u = n;
if (u / 10)
print_number(u / 10);
_putchar(u % 10 + '0');
}
}
