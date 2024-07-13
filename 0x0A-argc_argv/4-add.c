#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: the total number of individual numbers
 * @argv: a pointer to the numbers
 *
 * Return: 1 on error, 0 on success
 */
int main(int argc, char *argv[])
{
int a, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (a = 1; a < argc; a++)
{
int b;
b = 0;
while (argv[a][b] != '\0')
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
b++;
}
sum += atoi(argv[a]);
}

printf("%d\n", sum);

return (0);
}
