#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the numbers of money received --> 1
 * @argv: the exact amount in cent received
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents, change;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
change = 0;

if (cents / 25 > 0)
{
change = (cents / 25) + (cents % 25);
  /** 
   * if (cents % 25 > 5)
   * if (cents % 25 > 10 && cents % 25 < 25)
   * change = (cents / 25) + ((cents % 25) / 10) + ((cents % 25) % 10);
   * other conditions here
   */
}
else if (cents / 10 > 0 && cents / 10 < 2)
{
change = (cents / 10) + ((cents / 10) % 2) + ((cents / 10) % 2) % 1;
}
else if (cents / 5 > 0 && cents / 5 < 2)
{
change = (cents / 5) + (cents % 5);
}
else if (cents < 5)
change = cents;
else if (cents < 0)
{
printf("0\n");
}
printf("%d\n", change);
return (0);
}
