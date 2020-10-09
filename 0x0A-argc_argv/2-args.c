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

int i;

for (i = 0; i < argc; i++)

printf("%s\n", argv[i]);

return (0);
}
