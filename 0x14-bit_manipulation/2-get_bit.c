#include "holberton.h"
/**
 *get_bit - finds value of a bit at a given position
 *@n: the value to check
 *@index: position to get the value at
 *Return: value of bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
