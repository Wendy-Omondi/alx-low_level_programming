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

unsigned int i;
char *ptr;

ptr = malloc(sizeof(char) * size);
if (!size || !ptr)
return (0);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
