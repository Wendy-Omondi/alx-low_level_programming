#include "holberton.h"
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: string to be searched
 *@accept: bytes to be accepted
 *Return: pointer to bytes in s that match bytes in accept or NULL if not.
 */
char *_strpbrk(char *s, char *accept)
{

int w;

while (*s)
{
for (w = 0; accept[w]; w++)
if (*s == accept[w])
return (s);
s++;
}
return (0);
}
