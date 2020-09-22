#include "holberton.h"
/**
* _isalpha - Checks for alphabetic character
*@c: tested integer
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
