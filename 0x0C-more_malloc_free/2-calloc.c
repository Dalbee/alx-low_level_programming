#include "main.h"
/**
 * _calloc - This is  a fxn that allocates memory for an array, using malloc.
 * @nmemb: The no. of elements
 * @size: The size of one byte of element
 *
 * Description
 * - The memory is set to zero
 * - If nmemb or size is 0, then _calloc returns NULL
 * - If malloc fails, then _calloc returns NULL
 * Return: a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_malloc;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_malloc = malloc(nmemb * size);
	if (_malloc == NULL)
		return (NULL);

	for (k = 0; k < (nmemb * size); k++)
	{
		_malloc[k] = 0;
	}

	return (_malloc);
}
