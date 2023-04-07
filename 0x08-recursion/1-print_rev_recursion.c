#include "main.h"
/**
 * _print_rev_recursion - This fxn prints a string in the reverse direction;
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
