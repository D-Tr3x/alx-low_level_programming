#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum bytes from src to be used
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr)
ptr++;
while (*src && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
return (dest);
}
