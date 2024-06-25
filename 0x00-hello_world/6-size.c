#include <stdio.h>

/**
 * main - Entry point
 *
 * sizeof(char) - returns the size of char in byte(s)
 * sizeof(int) - returns the size of int in byte(s)
 * sizeof(long int - returns the size of long int in byte(s)
 * sizeof(long long int) - returns the size of long long int in byte(s)
 * sizeof(float) - returns the size of float in byte(s)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);
}
