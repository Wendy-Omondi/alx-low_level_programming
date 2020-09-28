#include "holberton.h"
/**
* _strlen - Returns the lenght of a string
*@s: pointer ued to find string length
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
int r = 0;
for (r = 0; s[r] != '\0'; r++)
{
_putchar(s[r]);
}
_putchar('\n');
return(r);
}
