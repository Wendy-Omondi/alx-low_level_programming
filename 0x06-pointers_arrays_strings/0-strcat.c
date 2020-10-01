#include "holberton.h"
/**
* _strcat - Contecates two strings
*@dest: first string
*@src: second string
* Return: Always 0 (Success)
*/
char *_strcat(char *dest, char *src)
{
int length;
int w;
length = 0;

while (dest[length] != '\0')
{
length++;
}

for (w = 0; src[w] != '\0'; w++)
{
length++;
}

dest[length] = src[w];

dest[length] = '\0';
_putchar(*dest);
return (0);
}
