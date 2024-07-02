#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * ........followed by a new line.
 * @s: points to the string
 */

void print_rev(char *s)
{
  int len = 0;
  int a = len - 1;
  while (s[len] != '\0')
    {
      len++;
    }

  while (a >= 0)
    {
      _putchar(s[a]);
      a--;
    }
  _putchar('\n');
}


