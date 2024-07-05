#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: the modified string
 */

char *cap_string(char *str)
{
char *ptr = str;
int capt = 1;
char *separators = " \t\n,;.!?\"(){}";

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z' && capt)
*ptr -= 32;

capt = (strchr(separators, *ptr) != NULL);

ptr++;
}
return (str);
}
