#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and/or 1 chars
 *
 * Return: converted number, or 0 if b is NULL
 * or there are chars that are neither 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		sum = sum << 1;
		sum = sum | (*b - '0');

		b++;
	}

	return (sum);

}
