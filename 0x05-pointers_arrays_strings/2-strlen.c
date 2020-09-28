#include "holberton.h"
/**
* _strlen - Returns the lenght of a string
*@s: pointer ued to find string length
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
int w = 0;
while (*s != '\0')
w++;
s++;
return (w);
}
