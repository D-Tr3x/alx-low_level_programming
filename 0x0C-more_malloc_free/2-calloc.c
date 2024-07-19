#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: the size in bytes of each element
 *
 * Return: pointer to the allocated memory,
 * or NULL on error.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i, n;
n = nmemb * size;

/* Returns NULL if nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* memory allocation for (nmemb * size) */
ptr = malloc(n);

/* Returns NULL if pointer fails */
if (ptr == NULL)
return (NULL);

/* set memory of ptr to zero */
for (i = 0; i < n; i++)
ptr[i] = 0;

return (ptr);
}
