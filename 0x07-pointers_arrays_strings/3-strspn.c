#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: a pointer to the string to be checked
 * @accept: a pointer to the set of characters to match
 *
 * Return: the number of bytes in the initial segment of @s
 * which consist only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int check;
char *ptr;

while (*s != '\0')
{
check = 0;
ptr = accept;

while (*ptr != '\0')
{
if (*s == *ptr)
{
i++;
check = 1;
break;
}
ptr++;
}
if (check == 0)
{
break;
}
s++;
}

return (i);
}
