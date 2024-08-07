#include "main.h"

/**
 * _sqrt - tries numbers for the square root number
 * @n: the number to find the square root of
 * @trial: the current square root try
 *
 * Return: the squareroot, or -1 if no natural square root exists
 */
int _sqrt(int n, int trial)
{
if ((trial * trial) > n)
return (-1);

if ((trial * trial) == n)
{
return (trial);
}

return (_sqrt(n, trial + 1));
}



/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: the number which its square root is to be found
 *
 * Return: the squareroot of the number
 */
int _sqrt_recursion(int n)
{
int _sqrt(int n, int trial);

if (n < 0)
{
return (-1);
}
return (_sqrt(n, 1));
}
