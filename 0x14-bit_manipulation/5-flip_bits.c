#include "holberton.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: the number to be flipped.
 * @m: The number to flip n into.
 *
 * Return: number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int comp = n ^ m, flip = 0;

while (comp > 0)
{
flip += (flip & 1);
comp >>= 1;
}

return (flip);
}
