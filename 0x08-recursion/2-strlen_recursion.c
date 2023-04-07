#include "main.h"
/**
 * _strlen_recursion - This fxn returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: returns (q), the length of the string.
 */
int _strlen_recursion(char *s)
{
	int q = 0;

	if (*s)
	{
		q++;
		q += _strlen_recursion(s + 1);
	}

	return (q);
}
