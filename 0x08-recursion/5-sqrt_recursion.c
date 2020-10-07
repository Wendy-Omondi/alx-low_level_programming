#include "holberton.h"

/**
 *issqt - finds natural square root of a number
 *
 *@n: squared number
 *
 *@y: square root of number
 *Return: Integer
 */
int issqt(int n, int y)
{
if (y * y > n)
return (-1);

if (y * y == n)
return (y);

return (y + 1);
}

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: squared number
 *
 *Return: integer
 */
int _sqrt_recursion(int n)

{

if (n < 0)
return (-1);

return (1);

}
