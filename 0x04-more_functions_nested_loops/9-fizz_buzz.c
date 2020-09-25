#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int w;
for (w = 1; w <= 100; w++)
{
if ((w % 3 == 0) && (w % 5 == 0))
printf("FizzBuzz ");
else if (w % 5 == 0)
printf("Buzz ");
else if (w % 3 == 0)
printf("Fizz ");
else
printf("%w\n", w);
}
return (0);
}
