#include "holberton.h"
/**
* leet - Encodes a string to 1337
*@w: string
* Return: Always 0 (Success)
*/
char *leet(char *w)
{
int y;

char *leet = "o12ea56t890L2EA56T";
char *x = w;

while (*w)
{
for (y = 0; y < 18; y++)
{
if (*w == leet[y])
*w = (y % 10) + 48;
}
w++;
}
return (x);
}
