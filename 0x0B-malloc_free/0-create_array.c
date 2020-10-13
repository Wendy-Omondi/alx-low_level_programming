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

char *ptr = (char *)malloc(c);

if (size == 0)
{
return (0);
}
return (ptr);
}
