#include "main.h"

/**
 * get_bit - finds the position of a bit at a given index
 * @n: the decimal number where the bit is searched
 * @index: the given position of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8;
	unsigned long int position;

	if (index >= size)
		return (-1);

	position = (n >> index) & 1;

	return (position);
}
