#include "main.h"

/**
 * _strcpy - copies the string pointed by src,
 * ..........including the terminating null byte (\0),
 * ..........to the buffer pointed to by dest.
 *
 * @dest: points to the destination buffer
 * @src: points to the source string
 *
 * Return: points to dest
 */

char *_strcpy(char *dest, char *src)
{
int a = 0;

while (src[a] != '\0')
{
dest[a] = src[a];
a++;
}
dest[a] = '\0';
return (dest);
}
