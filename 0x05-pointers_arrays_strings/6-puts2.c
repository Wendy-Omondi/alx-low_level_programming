#include "holberton.h"
/**
* _strlen - Returns the lenght of a string
*@s: string
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
char *p = s;
while (*s)
s++;
return (s - p);
}
/**
* puts_half - prints half of a string
* @str: string
*/
void puts_half(char *str)
{
int size, i, half;
size = _strlen(str);
half = !(size % 2) ? size / 2 : (size - 1) / 2 + 1;
for (i = half; i < size; i++)
_putchar(*(str + i));
_putchar('\n');
}
