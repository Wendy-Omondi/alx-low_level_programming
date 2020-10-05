#include "holberton.h"
/**
 *_memcpy - copies memory area
 *@dest: memory destinantion
 *@src: memory source
 *@n: bytes to be used from src
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

char *w = dest;

while (n--)
{
*dest++ = *src++;
}
return (w);
}
