#include "main.h"

/**
 * _realloc -This is a fxn that reallocates a memory blk using malloc and free
 * @ptr: The pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes of the new memory block
 *
 * Description
 * The contents will be copied to the newly allocated space, in the range from
 * the start of ptr up to the minimum of the old and new sizes
 * - If new_size > old_size, the “added” memory should not be initialized
 * - If new_size == old_size do not do anything and return ptr
 * - If ptr is NULL, then the call is equivalent to malloc(new_size), for all
 *   values of old_size and new_size
 * - If new_size is equal to zero, and ptr is not NULL, then the call is
 *   equivalent to free(ptr). Return NULL
 * - Don’t forget to free ptr when it makes sense
 *
 * Return: new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n_ptr =  malloc(new_size);
		if (n_ptr == NULL)
			free(n_ptr);
		return (n_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size || ptr != NULL)
	{
		n_ptr = malloc(new_size);
		if (n_ptr == NULL)
			return (NULL);

		/* This copies the values in ptr to n_ptr */
		j = 0;
		while (j < old_size)
		{
			*((char *)n_ptr + j) = *((char *)ptr + j);
			j++;
		}
	}

	free(ptr);
	return (n_ptr);
}
