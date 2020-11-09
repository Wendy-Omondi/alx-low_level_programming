#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)
{
int w;
int y;
int x;

for (w = 0; w < 8; w++)
{
for (y = w + 1; y < 9; y++)
{
for (x = y + 1; x < 10; x++)
{
putchar((w % 10) + '0');
putchar((y % 10) + '0');
putchar((x % 10) + '0');

if (w == 7 && y == 8 && x == 9)
continue;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
