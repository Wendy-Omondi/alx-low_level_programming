#include <stdio.h>

/**
 *main - Entry point.
 *Return: Success
 */

int main(void)
{
int counter;
long int first = 1;
long int second = 1;
long int sum;

printf("%d", 1);
for (counter = 1; counter <= 49; counter++)
{
sum = first + second;
printf(", %ld", sum);
first = second;
second = sum;
}

printf("\n");

return (0);
}
