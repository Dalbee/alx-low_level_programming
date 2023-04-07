#include "main.h"

int final_prime(int n, int q);

/**
 * is_prime_number - This fxn determines if an integer is a prime number
 * @n: number to be examined
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (final_prime(n, n - 1));
}

/**
 * final_prime - recursively determines if a number is a prime number
 * @n: number to be examined
 * @q: the iterator
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int final_prime(int n, int q)
{
	if (q == 1)
		return (1);
	if (n % q == 0 && q > 0)
		return (0);
	return (final_prime(n, q - 1));
}
