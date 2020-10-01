#include "holberton.h"
/**
* string_toupper - Changes string from lowercase to uppercase
*@x : string
* Return: Always 0 (Success)
*/
char *string_toupper(char *x)
{
int w;

if (x[w] >= 'a' && x[w] <= 'z')
x[w] = x[w] - 32;
return (w);
}
