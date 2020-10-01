#include "holberton.h"
/**
* _strncpy - Copies a string
*@dest: first string
*@src: second string
*@n: most butes to be used from src
* Return: Always 0 (Success)
*/
char *_strncpy(char *dest, char *src, int n)
{

for (n = 0; dest[n] != '\0'; n++)
{
dest[n] = src[n];
}
src[n] = '\0';
return (dest);
}
