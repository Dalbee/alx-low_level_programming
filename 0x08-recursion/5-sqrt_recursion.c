#include "main.h"

int final_sqrt_recursion(int n, int q);

/**
 * _sqrt_recursion - This fxn returns the square root of a natural number
 * @n: The number from which the square root is calculated
 *
 * Return: the resultant square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (final_sqrt_recursion(n, 0));
}

/**
 * final_sqrt_recursion - recursion to calculate the
 * square root of a natural number
 * @n: The number from which the sqaure root is calculated
 * @q: The iterator
 *
 * Return: the resultant square root
 */
int final_sqrt_recursion(int n, int q)
{
	if (q * q > n)
		return (-1);
	if (q * q == n)
		return (q);
	return (final_sqrt_recursion(n, q + 1));
}
