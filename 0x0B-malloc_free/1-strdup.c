#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 *
 *@s: string
 *
 *Return: length of string
 */

int _strlen(char *s)
{

char *p = s;

while (*s)

{
s++;
}

return (s - p);
}

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *
 *@str: string to copy
 *
 *Return: copied string
 */

char *_strdup(char *str)
{
int i, l;
char *copy;

if (!str)
return (0);

l = _strlen(str);
copy = malloc(sizeof(char) * l + 1);

if (!copy)
return (0);

for (i = 0; i < l; i++)
copy[i] = str[i];

copy[i] = 0;

return (copy);
}
