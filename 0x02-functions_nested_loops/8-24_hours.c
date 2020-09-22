#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
void jack_bauer(void)
{
int w, y;
for (w = 0; w < 24; w++)
{
for (y = 0; y <= 60; y++)
{
_putchar(w / 10 + 0);
_putchar(w % 10 + 0);
_putchar(':');
_putchar(y / 10 + 0);
_putchar(y % 10 + 0);
_putchar('\n')
}
}
