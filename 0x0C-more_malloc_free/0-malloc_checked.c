#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if the malloc functin is successful
 * @b: the size of memory to be allocated
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
