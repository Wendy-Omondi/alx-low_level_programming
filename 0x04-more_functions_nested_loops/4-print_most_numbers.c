#include "holberton.h"
/**
* print_most_numbers - Prints 0 to 9 except 2 and 4
*
* Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
char w;
for (w = 48; w < 58; w++)
{
if (w != 50 && w != 52)
_putchar(w);
}
_putchar('\n');
}
