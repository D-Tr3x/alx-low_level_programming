#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar() - prints the value of alp
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alp = 'z';
while (alp >= 'a')
{
putchar(alp);
alp--;
}
putchar('\n');
return (0);
}
