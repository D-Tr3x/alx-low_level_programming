#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memory
 * containing s1, followed by the first n bytes of s2,
 * and null terminated. NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, j = 0, length, a, b;
char *str;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (n >= j)
n = j;
length = i + n + 1;

str = malloc(length *sizeof(char));
if (str == NULL)
return (NULL);

for (a = 0; a < i; a++)
str[a] = s1[a];
for (b = 0; b < n; b++, a++)
str[a] = s2[b];

str[a] = '\0';

return (str);
}
