#include "holberton.h"
/**
* _strncat - Contecates two strings upto n bytes
*@dest: first string
*@src: second string
*@n: maxium number of bytes to be used from n
* Return: Always 0 (Success)
*/
char *_strncat(char *dest, char *src, int n)
{
int length;
int size;

length = 0;

while (dest[length] != '\0')
{
length++;
}
for (size = 0; size < n && src[size] != '\0'; size++)
{
length++;
}
dest[length] = src[size];

dest[length + size] = '\0';
return (dest);
}
