#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *@argc: returns number of arguents in a function
 *
 *@argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{

int w, x;
int sum = 0;

if (argc > 1)
for (w = 1; w < argc; w++)
{
for (x = 0; argv[w][x]; x++)
{ 
if (argv[w][x] < '0' || argv[w][x] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[w]);
}
printf("%d\n", sum);
return (0);
}
