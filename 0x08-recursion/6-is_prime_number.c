#include "holberton.h"

/**
 *is_prime_number - Returns prime numbers
 *
 *@n: integer
 *
 *Return: Integer
 */

int is_prime_number(int n)
{

int i = 2;

if (n <= 2)
return ((n == 2) ? 1 : 0);

if (n % i == 0)
return (0);

if (i * i > n)
return (1);

return (is_prime_number(i + 1));
}
