#include "main.h"

/**
 * malloc_checked - This is a fxn that allocates memory using malloc.
 * @b: This is the memory size
 * if malloc fails, the malloc_checked termination with a status value of 98
 *
 * Return: ptr, a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
