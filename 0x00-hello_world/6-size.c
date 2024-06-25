#include <stdio.h>

/**
 * main(void) - the entry point for a program that prints the size of various types on the computer
 * sizeof(char) - returns the size of char in byte(s) 
 * sizeof(int) - returns the size of int in byte(s)
 * sizeof(long int - returns the size of long int in byte(s)
 * sizeof(long long int) - returns the size of long long int in byte(s)
 * sizeof(float) - returns the size of float in byte(s)
 */

int main(void)
{
  printf("Size of a char %zu byte(s)\n", sizeof(char)), "(s)" : "";
  printf("Size of an int: %zu byte(s)\n", sizeof(int));
  printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
  printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
  printf("Size of float: %zu byte(s)\n", sizeof(float));

  return (0);
}
