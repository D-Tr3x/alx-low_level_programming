#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: a pointer to the string to be searched
 * @c: the character to be located
 *
 * Return: a pointer to the first occurence
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}

return (NULL);
}
