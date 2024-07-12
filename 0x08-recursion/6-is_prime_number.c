#include "main.h"

/**
 * prime - helper function to check for prime using recursion
 * @n: the number to check
 * @p: the divisor to check
 *
 * Return: 1 if thr  number is prime, 0 otherwise
 */
int prime(int n, int p)
{
if ((p * p) > n)
return (1);
if ((n % p) == 0)
{
return (0);
}

return (prime(n, p + 1));
}

/**
 * is_prime_number - checks if a number is a prime
 * @n: the number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
int prime(int n, int p);

if (n < 2)
{
return (0);
}

return (prime(n, 2));
}
