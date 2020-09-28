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
 *print_rev - Prints a string in reverse
 *@s: string
 */
void print_rev(char *s)
{
int size = _strlen(s);
while (size--)
_putchar(*(s + size));
_putchar('\n');
}
