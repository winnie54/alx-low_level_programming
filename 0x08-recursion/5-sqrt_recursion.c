#include "main.h"

/**
 * power_operation - returns the natural square root of a number
 * @n: input number
 * @c: iterator
 *
 * Return: squareroot of number or -1 for error
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == n)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: squareroot of n
 * -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
