#include "main.h"

int examine_palindrome(char *s, int q, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - This fxn examines if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (examine_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - This fxn returns the length of a string
 * @s: string to from which the length is calculated
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * examine_palindrome - recursively examines the characters for palindrome
 * @s: string to examine
 * @q: The iterator
 * @len: The length of the string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int examine_palindrome(char *s, int q, int len)
{
	if (*(s + q) != *(s + len - 1))
		return (0);
	if (q >= len)
		return (1);
	return (examine_palindrome(s, q + 1, len - 1));
}
