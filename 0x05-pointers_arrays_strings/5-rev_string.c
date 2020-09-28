#include "holberton.h"
/**
* _strlen - returns the lenght of a string
*@s: string
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
char *p = s;
while (*s)
s++;
return (s - p);
}
/**
 *rev_string - Reverses a string
 *@s: string
 */
void rev_string(char *s)
{
int size = _strlen(s);
char temp;
char *strt = s, *end = s;

end += size -  1;
while (strt < end)
{
temp = *strt;
*strt = *end;
*end = temp;
strt++;
end--;
}
}
