#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/void print_alphabet(void)
{
char w;
for (w = 'a'; w <= 'z'; w++)
putchar(w);
putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
