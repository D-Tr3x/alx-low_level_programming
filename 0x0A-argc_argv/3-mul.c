#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the numbers to be multiplied --> 2
 * @argv: a pointer to the integers to be multiplied
 *
 * Return: 1 on error, 0 on success
 */
int main(int argc, char *argv[])
{
int a, b;

if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);

printf("%d\n", (a * b));

return (0);
}
