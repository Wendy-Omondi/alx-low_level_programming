#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Creates array of characters
 *
 *@size: size of array
 *
 *@c: character used to initalize array
 *
 *Return: pointer to array or null if it fails
 */
char *create_array(unsigned int size, char c)
{

char *s;

if (size == 0)
{
return (0);
}

s = malloc(sizeof(char) * size);

if (s == NULL)
{
return (0);
}

else

unsigned int i = 0;
while (s[i] == '\0')
{
s[i] = c;
i++;
}
return (s);
}
