#include "holberton.h"

/**
* print_last_digit - Entry point
*
* Return: Always 0 (Success)
*/

int print_last_digit(int);
{
int n = 8044;
int lastdigit;
lastdigit = n % 10;
while (n <= 10)
{
n = n / 10;
}
_putchar(lastdigit);
_putchar ('\n');

}
