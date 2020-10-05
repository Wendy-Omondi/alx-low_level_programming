#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: searched string
 *@needle: substring to be located
 *Return: pointer to the beginining of located substring otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{

char *w, *x;

x = needle;

if (!*x)
return (haystack);
for (; haystack != 0; haystack++)
{
if (*haystack != *x)
continue;
w = haystack;
while (1)
{
if (!*x)
return (haystack);
if (*w++ != *x++)
break;
}
x = needle;
}
return (0);
}
