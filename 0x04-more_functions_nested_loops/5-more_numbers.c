#include "holberton.h"
/**
* more_numbers - Prints 10 times the numbers 0 to 9
*
* Return: Always 0 (Success)
*/
void more_numbers(void)
{
int w, y;
while (w <= 10)
{
for (y = 48; y < 58; y++)
{
_putchar(y);
}
_putchar(w);
w++;
}
_putchar('\n');
}
