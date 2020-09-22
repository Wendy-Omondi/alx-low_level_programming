#include "holberton.h"
/**
* print_alphabet_x10 - Print lowercase alphabet in 10 lines
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int w, y;
while (w <= 9)
{
{
for (y = 'a'; y <= 'z'; y++)
_putchar(y);
}
_putchar('\n');
w++;
}

}
