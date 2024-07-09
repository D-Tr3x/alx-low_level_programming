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

while (*s != '\0')
{
check = 0;
while (*accept != '\0')
{
if (*s == *accept)
{
i++;
check = 1;
break;
}
accept++;
}
if (check == 0)
{
break;
}
s++;
accept -= check;
}
return (i);
}
