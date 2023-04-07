#include "main.h"
/**
 * This function prints a string, followed by a new line.
 * This function _puts_recursion is similar to the standard library function puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
