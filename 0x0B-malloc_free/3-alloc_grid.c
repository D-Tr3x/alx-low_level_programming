#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: On success, pointer to array
 * On failure, NULL
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width <= 0 || height <= 0)
return (NULL);

/* memory allocation for pointer to height */
arr = malloc(height * sizeof(int *));
if (arr == NULL)
return (NULL);

/* memory allocation for each element */
for (i = 0; i < height; i++)
{
arr[i] = malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
return (NULL);
}

for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}
return (arr);
}
