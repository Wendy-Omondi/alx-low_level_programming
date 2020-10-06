#include "holberton.h"
/**
 *print_chessboard - prints chesshboard
 *@a: pointer to chessboard
 *Return: Always (0);
 */
void print_chessboard(char (*a)[8])
{
int w, y;
for (w = 0; w < 8; w++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[w][y]);
_putchar('\n');
}
}
}
