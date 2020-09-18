#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char w;
char x;
for (w = 0; w <= 9; w++)

putchar (w + '0');

int x;
for (x = 'a'; x <= 'f'; x++)

putchar(x);
putchar('\n');

return (0);
}
