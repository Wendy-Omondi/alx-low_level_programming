#include "holberton.h"
/**
* _puts - Entry point
*@str: string to be printed
* Return: Always 0 (Success)
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
