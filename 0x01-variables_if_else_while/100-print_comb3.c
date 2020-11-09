#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
int w;
int y;

for (w = 0; w < 9; w++)
{
for (y = w + 1; y < 10; y++)
{

putchar((w % 10) + '0');
putchar((y % 10) + '0');

if (w == 8 && y == 9)
continue;

putchar(',');
putchar(' ');
}

}

putchar('\n');
return (0);
}
