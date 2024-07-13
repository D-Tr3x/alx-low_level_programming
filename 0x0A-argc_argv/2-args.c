#include <stdio.h>

/**
 * main - prints all arguments it receives, on a new line
 * @argc: the number of arguments
 * @argv: a pointer to the arguments used
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
