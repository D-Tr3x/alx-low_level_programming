#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: the array to be printed
 * @size: the size of the array
 * @action: pointer to the function needed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
