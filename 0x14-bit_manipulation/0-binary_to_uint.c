#include "main.h"

/**
 * binary_to_uint - a fx. that converts a binary number to an
 * unsigned int.
 * @b: the  binary value
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a;/**hold integer*/
	/**value equivalent to bi str*/
	int len;/**hold length of str*/
	int base_two;/**calculates*/
	/**value of each digit*/

	if (!b)
		return (0);

	a = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			a += base_two;
		}
	}

	return (a);
}
