#include "main.h"

/**
 * flip_bits - gets the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int check;
	unsigned int count = 0;

	check = n ^ m;
	while (check)
	{
		count += check & 1;
		check = check >> 1;
	}

	return (count);
}
