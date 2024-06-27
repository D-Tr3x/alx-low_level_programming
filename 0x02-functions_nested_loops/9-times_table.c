#include "main.h"

/**
 * times_table - returns 9-times multiplication table
 * Return: 0 (Success)
 */

void times_table(void)
{
int digt, times, result;
for (digt = 0; digt <= 9; digt++)
{
_putchar('0');
for (times = 1; times <= 9; times++)
{
_putchar(',');
_putchar(' ');
result = digt * times;
if (result <= 9)
_putchar(' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
