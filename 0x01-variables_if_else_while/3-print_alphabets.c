#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int w;
for (w = 'a'; w <= 'z'; w++)
{
putchar (w);
}
int x;
for (x = 'A'; x <= 'z'; x++)
{
putchar (x);
putchar ('\n');
}
return (0);
}
