#include "main.h"

/**
 * _pow_recursion - This fxn returns the value of the exponent of x
 * @x: base value
 * @y: exponent
 *
 * Return: result of the exponentiation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
        else 
		return (x * _pow_recursion(x, y - 1));
}
