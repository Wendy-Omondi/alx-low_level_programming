#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a sqr matrix
 *@a: string to be pinted
 *@size: size of a
 *Return: always 0
 */
void print_diagsums(int *a, int size)
{

int w, y;
int sum = 0;

for (w = 0; w < size; w++)
sum += *(a + w * size + w);
printf("%d, ", sum);
sum = 0;
for (y = 0; y < size; y++)
sum += *(a + size * (y + 1) - (y + 1));
printf("%d\n", sum);
}
