#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string to be printed
 */

void puts_half(char *str)
{
int length = 0;
int a;

while (str[length] != '\0')
length++;
if (length % 2 == 0)
a = length / 2;
else
a = (length - 1) / 2 + 1;

for (; a < length; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
