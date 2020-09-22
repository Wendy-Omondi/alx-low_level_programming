#include "holberton.h"
/**
* main - Print lowercase alphabet in 10 lines
*
* Return: Always 0 (Success)
*/
int main(void)
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
return (0);
}
