#include "holberton.h"
/**
* print_numbers - prints numbers from 0-9 followed by new line
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
char w;
for (w = 48; w < 58; w++)
_putchar(w);
_putchar('\n');
}
