#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int print_sign(int n);

int n = 0;
int w = '+';
int y = '0';
int x = '-';
if (n > 0)
{
_putchar(w);
return (1);
}
else if (n == 0)
{
_putchar(y);
return (0);
}
else if (n < 0)
{
_putchar(x);
return (-1);
}
return (0);
}
