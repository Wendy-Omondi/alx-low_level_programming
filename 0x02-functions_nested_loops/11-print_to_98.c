#include "holberton.h"
/**
* print_to_98 - Prints all natural numbers from n to 98
*@n: first number
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
int w;
if (n <= 98)
{
for (w = n; w < 98; w++)
{
_putchar(w);
}
}
else
{
for (w = n; w > 98; w--)
{
_puthcar(w);
}
printf("98\n");
}
}
