#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
int w, y;
while (w < 9)
{
{
for (y = 'a'; y <= 'z'; y++)
putchar(y);
}
putchar('\n');
w++;
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
