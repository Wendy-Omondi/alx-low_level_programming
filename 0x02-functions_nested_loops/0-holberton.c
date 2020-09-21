#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c[10] = "Holberton";
int i = 0;
for (i = 0; i <= 9; i++)
{
putchar(c[i]);
}
putchar('\n');
return (0);
}
