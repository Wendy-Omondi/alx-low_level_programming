#include "holberton.h"
/**
* more_numbers - Prints 10 times the numbers 0 to 9
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
int w, y;
for (w = 0; w < 10; w++)
{
for (y = 0; y < 15; y++)
{
if (y >= 10)
_putchar(y / 10 + 48);
_putchar(y % 10 + 48);
}
_putchar('\n');
}
}
