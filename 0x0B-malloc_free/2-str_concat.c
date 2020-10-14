#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen - finds length of a string
 *
 *@s: string
 *
 *Return: length of string
 */

int _strlen(char *s)
{
char *p = s;

while (*s)
s++;

return (s - p);
}

/**
 *str_concat - concatenates two strings
 *
 *@s1: first string
 *
 *@s2: second string
 *
 *Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *c;
int i, j, l1, l2;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

l1 = _strlen(s1);
l2 = _strlen(s2);

c = malloc(sizeof(char) * (l1 + l2)+1);

if (!c)
return (0);

for (i = 0; i < l1; i++)
c[i] = s1[i];

for (j = 0; j < l2; j++, i++)
c[i] = s2[j];

c[i] = 0;

return (c);
}
