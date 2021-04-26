#include <stdio.h>

/**
 *main - Entry point
 *Return: Success
 */

int main(void)
{
int counter = 0;
long int first = 1;
long int second = 2;
long int sum = second;

while (second + first < 4000000)
{
second += first;

if (second % 2 == 0)
sum += second;

first = second - first;

counter++;
}
printf("%ld\n", sum);

return (0);
}
