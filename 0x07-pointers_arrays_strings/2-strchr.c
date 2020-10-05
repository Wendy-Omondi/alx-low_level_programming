#include "holberton.h"
/**
 *_strchr - points to the first occurrence of the character c in the string s
 *@s: string being pointed to
 *@c: character to be located in the string
 *Return: first occurrence of c in the string s, or NULL it not found
 */
char *_strchr(char *s, char c)
{

char *w = s;

for (w = 0; w <= s; w++)
{
if (*w == c)
{
return (w);
}
if (*w != c)
{
return (0);
}
}
return (0);
}
