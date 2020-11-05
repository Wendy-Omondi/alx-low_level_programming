#include "lists.h"

/**
 *print_binary - prints the binary representation of a number
 *@n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);

printf("%d", n & 1);
}