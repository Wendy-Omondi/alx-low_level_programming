#include "holberton.h"
/**
* main - Check for lowercase character
*
* Return: Always 0 (Success)
*/
int main(void)
{
int _islower(int c);

int ch = 'c';
int w = '1';
int y = '0';
if (_islower(ch))
_putchar(w);
else
_putchar(y);
_putchar('\n');
return (0);
}
