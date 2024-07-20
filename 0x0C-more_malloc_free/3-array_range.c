#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array containing
 * all values from min to max
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the newly cretated array,
 * NULL on error.
 */
int *array_range(int min, int max)
{
int *array;
int length, i;
length = max - min + 1;

if (min > max)
return (NULL);

array = malloc(length *sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; i < length; i++)
{
array[i] = min + i;
}

return (array);
}
