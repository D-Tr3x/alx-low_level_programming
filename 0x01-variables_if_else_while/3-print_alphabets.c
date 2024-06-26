#include <stdio.h>

/**
 * main - Entry point
 *
 * alpha_l - start point for lowercases
 * alpha_U - start point for uppercases
 *
 * Return: Always 0 (Success)
 */




int main(void)
{
char alpha_l = 'a';
char alpha_U = 'A';

while (alpha_l <= 'z')
{
putchar(alpha_l);
alpha_l++;
}
while (alpha_U <= 'Z')
{
putchar(alpha_U);
alpha_U++;
}
putchar('\n');
return (0);
}
