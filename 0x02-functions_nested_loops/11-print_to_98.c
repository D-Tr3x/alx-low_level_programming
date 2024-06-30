#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: The first number
 */

void print_to_98(int n)
{
for (; n < 98; n++)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
for (; n > 98; n--)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
}
if (n == 98)
printf("%d\n", n);
}
