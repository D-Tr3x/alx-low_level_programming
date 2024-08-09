#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number where the bit will be cleared
 * @index: index of the bit to clear
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	set = ~(1 << index);
	*n &= set;

	return (1);
}
