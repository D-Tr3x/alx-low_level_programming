#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: a pointer to the string that is searched
 * @accept: a pointer to the set of bytes to search for
 *
 * Return: a pointer to the byte in s
 * that matches one of the bytes in @accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *ptr = accept;
while (*ptr != '\0')
{
if (*s == *ptr)
{
return (s);
}
ptr++;
}
s++;
}
return (NULL);
}
