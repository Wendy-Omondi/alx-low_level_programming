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
int w;

for (w = 0; w < n && src[w] != '\0'; w++)

dest[w] = src[w];

for (w = 0; w < n; w++)

dest[w] = '\0';

return (dest);
}
