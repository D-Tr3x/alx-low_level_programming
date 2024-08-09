#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;
	int i;
	int state = 0;

	int size  = sizeof(n) * 8 - 1;

	for (i = size; i >= 0; i--)
	{
		a = n >> i;

		if (a & 1)
		{
			_putchar('1');
			state = 1;
		}
		else if (state)
		{
			_putchar('0');
		}
	}

	if (!state)
		_putchar('0');
}
