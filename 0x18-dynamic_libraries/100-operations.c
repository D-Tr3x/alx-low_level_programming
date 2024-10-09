/**
 * add - sums two integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts one integer from another
 * @a: the integer to be subtracted from
 * @b: the integer to be subtracted
 * Return: the difference
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides one integer with another
 * @a: the numerator
 * @b: the denominator
 * Return: the division
 */
int div(int a, int b)
{
	if (a == 0 || b == 0)
		return (0);
	return (a / b);
}

/**
 * mod - the modulo of two integer
 * @a: the first integer
 * @b: the second integer
 * Return: the remainder of a / b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
