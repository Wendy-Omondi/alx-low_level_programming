
#include "3-calc.h"

/**
 *main - Entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: Alway 0.
 */
int main(int argc, char *argv[])
{

int num1, num2, i;
int(*fp)(int, int);

if (argc != 4)
printf("Error\n");
exit (98);

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
fp = get_op_func(argv[2]);

if (fp == NULL)
{
printf("Error\n");
exit (99);
}

if (!fp)
printf("Error\n");
exit (99);

i = fp(num1, num2);

printf("%d\n", i);

return (0);
}
