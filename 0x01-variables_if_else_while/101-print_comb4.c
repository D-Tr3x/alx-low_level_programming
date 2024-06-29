#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
int a, b, c;
for (a = 0; a < 8; a++)
for (b = 0; b < 9; b++)
for (c = 0; c < 10; c++)
if (a != b && b != c && a != c && (a < b) && (b < c))
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a < 7 && b < 9 && c < 10)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
