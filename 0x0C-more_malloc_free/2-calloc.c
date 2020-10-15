#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - alloctes memmory of an array
 *
 *@nmemb: number of elements
 *
 *@size: byte size of each array element
 *
 *Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *m;
char *t;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

m = malloc(size * nmemb);

if (m == NULL)
return (NULL);

t = m;

for (i = 0; i < (size * nmemb); i++)
t[i] = '\0';

return (m);
}
