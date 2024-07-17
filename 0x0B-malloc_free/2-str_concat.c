#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: On success, pointer to concatenated string
 * On error, NULL
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0, length = 0;
char *ptr;

/* Returns empty string on NULL */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Find the length of the concatenated string */
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
length = i + j + 1;

ptr = malloc(length *sizeof(char));
if (ptr == NULL)
return (NULL);

/* Copies both strings to the pointer */
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
ptr[i + j] = s2[j];

ptr[i + j] = '\0';

return (ptr);
}
