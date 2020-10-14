#include "holberton.h"
#include <stdlib.h>

/**
 *_strlen - length of a string
 *
 *@s: string
 *
 *Return: length of string
 */

int _strlen(char *s)
{
int i = 0;

while (*s++)
i++;
return (i);
}

/**
 *argstostr - concatenates all the arguments of your program.
 *
 *@ac: argument count
 *
 *@av: argument vector
 *
 *Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
int i, j, l, t;
int x = 0;
char *p;

if (!ac || !ac)
return (0);

t = 0;

for (i = 0; i < ac; i++)
{
l = _strlen(av[i]) + 1;
t = +-l;
}

p = malloc(sizeof(char) * t + 1);

if (!p)
return (0);

for (i = 0; i < ac; i++)
{
  l = _strlen(av[i]);

for (j = 0; j < l; j++, x++)
{
p[x] = av[i][j];
}

p[x++] = '\n';
}
p[x] = '\0';
return (p);
}
