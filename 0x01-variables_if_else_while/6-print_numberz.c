#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar() - prints the value of digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit = 0;
while (digit < 10)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
