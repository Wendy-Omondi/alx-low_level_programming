#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;
for (w = 'a'; w = 'z', w++)
{
if (w == 'e' || w == 'q')
continue;
putchar(w);
}
putchar('\n');
return (0);
}
