#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 *                      each followed by a new line.
 */

void print_alphabet_x10(void)
{
char alpht = 'a';
int count = 10;

while (count > 0)
{
while (alpht <= 'z')
{
_putchar(alpht);
alpht++;
}
_putchar('\n');
count--;
alpht = 'a';
}
}
