#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char alpht = 'a';
  while (alpht <= 'z')
    {
      putchar(alpht);
      alpht++;
    }
  putchar('\n');
  return (0);
}
