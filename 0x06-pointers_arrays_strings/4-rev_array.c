#include "holberton.h"
/**
* reverse_array - Revereses the content of an array of integers
*@n: Number of elements in an array
* Return: Always 0 (Success)
*/
void reverse_array(int *a, int n)
{
int temp;
int w;
int y;

while (w < n)

{
temp = a[w];
a[w] = a[y];
a[y] = temp;

w++;
y++;

}

}
