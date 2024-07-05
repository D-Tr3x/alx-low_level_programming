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

while (*ptr != '\0')
ptr++;
while (*src != '\0' && n > 0)
{
*ptr = *src;
ptr++;
src++;
n--;
}
return (dest);
}
