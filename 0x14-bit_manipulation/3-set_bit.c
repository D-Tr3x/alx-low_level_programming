#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number where bit will be set
 * @index: index of bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	set = 1 << index;
	*n = *n | set;

	return (1);
}
