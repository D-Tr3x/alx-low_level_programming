#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
char alpht = 'a';

while (alpht <= 'z')
{
_putchar(alpht);
alpht++;
}
_putchar('\n');
}
