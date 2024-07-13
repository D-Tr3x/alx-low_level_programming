#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: the number count of arguments used in main
 * @argv: a pointer to array of the arguments used
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
