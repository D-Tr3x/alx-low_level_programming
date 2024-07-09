#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string that is searched
 * @needle: pointer to the substring to be located
 *
 * Return: a pointer to the beginning of the located substring
 * ,or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*h && *n && *h == *n)
{
h++;
n++;
}
if (!*n)
{
return ((char *)haystack);
}
haystack++;
}

if (!*needle)
return ((char *)haystack);

return (NULL);
}
