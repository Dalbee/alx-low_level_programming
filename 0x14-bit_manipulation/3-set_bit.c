#include "main.h"

/**
 * set_bit - a fx. that sets the value of a bit to 1.
 * at a given index.
 * @n: the pointer of an unsigned long int.
 * @index: the index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;/**left shift*/
	*n = (*n | k);

	return (1);
}
