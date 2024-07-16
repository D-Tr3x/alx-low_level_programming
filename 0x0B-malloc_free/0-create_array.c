#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the length of the string
 * @c: the string
 *
 * Return: a pointer to the array (on success), NULL on error
 */

char *create_array(unsigned int size, char c)
{
unsigned int num;
char *array;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (num = 0; num < size; num++)
{
array[num] = c;
}
return (array);
}
