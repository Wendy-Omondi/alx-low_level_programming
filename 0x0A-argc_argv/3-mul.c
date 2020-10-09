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
int w = atoi(argv[1]);
int x = atoi(argv[2]);
int prod = w * x;

if (argc == 3)
{
printf("%d\n", prod);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
