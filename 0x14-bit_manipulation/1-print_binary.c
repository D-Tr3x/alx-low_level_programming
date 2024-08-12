#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started = 0;
	mask = (unsigned long int )1 << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if (mask & n)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}

	if (!started)
		_putchar('0');
}
