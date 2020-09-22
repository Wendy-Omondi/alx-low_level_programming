#include "holberton.h"
/**
* main - Prints Holberton followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *school_name = "Holberton";
int letters = 0;
for (letters = 0; letters <= 9; letters++)
{
_putchar(school_name[letters]);
}
_putchar('\n');
return (0);
}
