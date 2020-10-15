#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *
 *@b: bytes to be allocated
 *
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{

void *m = malloc(b);

if (m == NULL)
exit(98);

return (m);
}
