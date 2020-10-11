#include "holberton.h"
#include <stdio.h>
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
int a = 0;
while (--argc)
a++;
printf("%d\n", a);
{
argv++;
}
return (0);

}
