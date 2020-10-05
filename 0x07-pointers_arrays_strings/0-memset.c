#include "holberton.h"
/**
 * _memset - Fills memory with a contant byte
 *@s: Pointer to the block of memory to fill
 *@b: Value to be set
 *@n: Number of bytes to be set to the value
 *Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{

char *w = s;

while (n--)
{
*s++ = b;
}
return (w);
}
