#include "holberton.h"
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int w;
for (w = 1; w <= 99; w++)
{
if (w % 3 == 0)
printf("Fizz");
else if (w % 5 == 0)
printf("Buzz");
else if (w % 15 == 0)
printf("FizzBuzz");
else
printf("%w", w);
}
printf("Buzz\n");
return (0);
}
