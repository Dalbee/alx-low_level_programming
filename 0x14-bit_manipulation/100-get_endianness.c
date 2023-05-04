#include "main.h"

/**
 * get_endianness - a fx. that checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int r = 1;
	/*char pointer is used to*/
	/*access individual bytes of*/
	/*the unsigned int */
	/*value in memory*/
	char *c = (char *)&r;

	if (*c)
		return (1);
	else
		return (0);
}
