#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - outputs the hexadecimal 
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char hexd = 0;
int hexa = 'a';
while (hexd < 10)
{
putchar(hexd + '0');
hexd++;
}
while (hexa <= 'f')
{
putchar(hexa);
hexa++;
}
putchar('\n');
return (0);
}
