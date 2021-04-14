#include "holberton.h"
/**
* print_alphabet_x10 - Print lowercase alphabet in 10 lines
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char x;
int i;
    
for(i = 0; i <= 9; i++)
{
for(x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
