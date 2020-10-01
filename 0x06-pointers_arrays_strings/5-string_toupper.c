#include "holberton.h"
/**
* string_toupper - Changes string from lowercase to uppercase
*@x : string
* Return: Always 0 (Success)
*/
char *string_toupper(char *x)
{
char *w = x;

while (*x)
{
if (*x >= 97 && *x <= 122)
*x -= 32;
x++;
}
return (w);
}
