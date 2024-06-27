#include "main.h"

/**
 * print_sign - check the sign of number n
 * @n: the number that is checked
 * Return: 1 if n greater than zero, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar(0 + '0');
return (0);
}
}
