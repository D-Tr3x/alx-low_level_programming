#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
int length = 0;
int a = 0;
char temp;

while (s[length] != '\0')
{
length++;
}
length--;

while (a < length)
{
temp = s[a];
s[a] = s[length];
s[length] = temp;
a++;
length--;
}
}
