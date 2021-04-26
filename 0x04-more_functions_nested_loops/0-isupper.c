#include "holberton.h"
/**
* _isupper - Checks for uppercase characters
*@c: tested integer
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
