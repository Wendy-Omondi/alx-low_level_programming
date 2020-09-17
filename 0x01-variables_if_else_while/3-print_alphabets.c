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
for (w = 'a'; w <= 'z'; w++)
putchar(w);
int z;
for (z = 'A'; z <= 'Z'; z++)
putchar (z);
putchar (y);
return (0);
}
