#include "holberton.h"
/**
* cap_string - Capitalizes all words of a string
*@w: string
* Return: Always 0 (Success)
*/
char *cap_string(char *w)
{
int y;
int x;

y = 0;

while (w[y] != '\0')
{
y++;
}

x = 0;

while (x < y)
{
if (x == 0 && w[x] >= 'a' && w[x] <= 'z')
{
w[x] = w[x] - 32;
}
if ((w[x] == ',' || w[x] == ';' || w[x] == ',' ||
w[x] == '.' || w[x] == '!' || w[x] == '?' ||
w[x] == '"' || w[x] == '(' || w[x] == ')' ||
w[x] == '{' || w[x] == '}' || w[x] == ' ' ||
w[x] == '\t' || w[x] == '\n') && (w[x + 1] >= 'a' && w[x + 1] <= 'z'))
{
w[x + 1] = w[x + 1] - 32;
}
x++;
}
return (w);
}
