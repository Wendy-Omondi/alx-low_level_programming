#include <stdio.h>

/**
 *main - Entry point
 *Return: Success
 */

int main(void)
{
int counter;
long int first = 1;
long int second = 1;
long int sum;
long long int sums;

 for (counter = 1; counter <= 4000000; counter++)
{
sum = first + second;
first = second;
second = sum;
if (sum % 2 == 0)
{
sums += sum;
printf("%ld", sum);
}
else
return (0);
}
printf("\n");
return (0);
}
