#include "main.h"

/**
 * _memcpy - copies n bytes from memory area to memory area
 *
 * @dest: a pointer to the memory location the bytes will be copied to
 * @src: pointer to the source memory location
 * from where the bytes will be copied
 * @n: the number of bytes to be copied
 *
 * Return: a resulting pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
