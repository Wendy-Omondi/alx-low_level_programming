#incllude "holberton.h"
/**
* rot13 - Code
*@w: string
* Return: Always 0 (Success)
*/
char *rot13(char *w)
{
int y;
char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"
char *x = w;

while (*w)
{

for (y = 0; y <= 52, y++)

{
if (*w == rot13[y])

{
*w = rot13[y];
break;
}

w++
}

return (x);
}
