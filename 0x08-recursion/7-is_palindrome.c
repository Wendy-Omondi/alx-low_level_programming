#include "holberton.h"

/**
 *is_palindrome - searches empty string
 *
 *@s: string to be searched
 *
 *Return: integer
 */
int is_palindrome(char *s)
{

if (*s != '\0')
return (1);

else if (*s == '\0')
return (0);

return (0);
}
