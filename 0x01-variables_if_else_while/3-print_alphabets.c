#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

char alpha_l = 'a';
char alpha_U = 'A';

int main(void)
{
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
