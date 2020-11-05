#include "holberton.h"

/**
 *set_bit - finds value of a bit at a given position
 *@n: pointer the value to check
 *@index: position to get the value at
 *Return: value of bit at index or -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 32)
return (-1);

*n ^= (1 << index);

return (1);
}
