#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the given string
 *
 * Return: On success, a pointer to duplicate
 * On error, NULL
 */
char *_strdup(char *str)
{
unsigned int i = 0;
unsigned int size;
char *duplicate;

if (str == NULL)
return (NULL);

/* To find the length of the string */
while (str[i] != '\0')
i++;

size = i + 1;
duplicate = malloc((size) * sizeof(char));

if (duplicate == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
