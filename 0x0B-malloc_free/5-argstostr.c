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
char *str;
int arg, byte, index, size = ac;

if (ac == 0 || av == NULL)
return (NULL);

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}

str = malloc(sizeof(char) * size + 1);

if (str == NULL)
return (NULL);

index = 0;

for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
str[index++] = av[arg][byte];

str[index++] = '\n';
}

str[size] = '\0';

return (str);
}
