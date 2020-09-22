#include "holberton.h"

/**
* print_last_digit - Entry point
*@n: tested integer
* Return: Always 0 (Success)
*/

int print_last_digit(int n);
{
int lastdigit;

lastdigit = n % 10;
_putchar(lastdigit + '0');
return (lastdigit);
}
