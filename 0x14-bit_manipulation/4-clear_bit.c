#include "main.h"

/**
 * clear_bit - a fx. that sets the value of a bit to 0.
 * at a given index.
 * @n: the pointer of an unsigned long int.
 * @index: the index of the bit.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
