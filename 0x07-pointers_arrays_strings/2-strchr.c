#include "holberton.h"
/**
 *_strchr - points to the first occurrence of the character c in the string s
 *@s: string being pointed to
 *@c: character to be located in the string
 *Return: first occurrence of c in the string s, or NULL it not found
 */
char *_strchr(char *s, char c)
{

char w;

while (1)
{
w = *s++;
if (w == c)
return (s - 1);
if (!w)
return (0);
}
}
