#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * ........followed by a new line.
 * @s: points to the string
 */

void print_rev(char *s)
{
int len = 0;
int a = len - 1;
while (s[len] != '\0')
{
len++;
}
for (a = len - 1; a >= 0; a--)
{
_putchar(s[a]);
}

_putchar('\n');
}


