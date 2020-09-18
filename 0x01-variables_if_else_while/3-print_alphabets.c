#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;
char z;
for (w = 'a'; w <= 'z'; w++)
{
putchar(w);
}
for (z = 'A'; z <= 'Z'; z++)
{
putchar (z);
}
putchar ('\n');
return (0);
}
