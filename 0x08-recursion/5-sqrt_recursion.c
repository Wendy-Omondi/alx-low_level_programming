#include "holberton.h"

/**
 *_sqrt_recursion - finds natural square root of a number
 *
 *@n: integer whose square root is being found
 *
 *Return: Integer
 */
int issqt(int n, int y)
{
if (y * y > n)
return (-1);

if (y * y <= n)
return (y);

return (y + 1);
}

int _sqrt_recursion(int n)

{

if (n < 0)
return (-1);

return (1);

}
