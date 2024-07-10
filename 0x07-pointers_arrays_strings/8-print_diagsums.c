#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the square matrix
 * @size: the size of the matrix (row == column)
 */

void print_diagsums(int *a, int size)
{
int i;
int sum_x = 0;
int sum_y = 0;

for (i = 0; i < size; i++)
{
sum_x += a[i * size + i];
sum_y += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum_x, sum_y);
}
