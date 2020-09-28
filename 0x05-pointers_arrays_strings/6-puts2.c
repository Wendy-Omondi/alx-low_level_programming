#include "holberton.h"
/**
* _strlen - Returns length of string
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
* puts2 - Prints every other character
*@s: string
*/
void puts2(char *str)
{
int i;
int size = _strlen(str);
for ( i = 0; i < size; i += 2)
_putchar(*(str + i));
_putchar('\n');
}
