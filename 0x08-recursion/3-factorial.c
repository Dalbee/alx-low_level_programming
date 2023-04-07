#include "main.h"

/**
 * factorial - This fxn returns the factorial of a number
 * @n: number from which the factorial is returned
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
