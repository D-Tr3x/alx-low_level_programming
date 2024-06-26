#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
  int r;

  r = _islower('A');
  _putchar(r + '0');
  r = _islower('k');
  _putchar(r + '0');
  r = _islower(117);
  _putchar(r + '0');
  _putchar('\n');
  return (0);
}
