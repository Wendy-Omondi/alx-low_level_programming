#include "holberton.h"
/**
* swap_int - Swaps the value of two integers
*@a: integer to be swapped
*@b: integer to be swapped
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
