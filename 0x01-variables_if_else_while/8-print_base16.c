#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;
char y = '\n';
for (w = 0; w <= 9; w++)
{
putchar (w);
}
int x;
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
putchar(y);
}
return (0);
}
