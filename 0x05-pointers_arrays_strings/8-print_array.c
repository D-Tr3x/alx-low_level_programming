#include <stdio.h>
#include "main.h"

/**
 * print_array -  prints n elements of an array of integers,
 * ...............followed by a new line.
 * @a: points to the array
 * @n: the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b != (n - 1))
printf(", ");
}
printf("\n");
}
