#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int w;
int y;

for (w = 0; w <= 98; w++)
{
for (y = w + 1; y <= 99; y++)
{
putchar((w / 10) + '0');
putchar((w % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');

if (w == 98 && y == 99)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
