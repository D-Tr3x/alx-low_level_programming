#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array that is searched
 * @size: the number of the elements in the array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of the first element if element matches,
 * -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
