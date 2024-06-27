#include "main.h"

/**
 * times_table - returns 9-times multiplication table
 * Return: 0 (Success)
 */

void times_table(void)
{
  int row, col;
  for (row = 0; row <= 9; row++)
    {
      for (col = 0; col <=9; col++)
	{
	  _putchar((col * row) + '0');
	}
      if (row < 9 && col < 9)
	_putchar(',');
      _putchar(' ');
    }
  _putchar('\n');
}
