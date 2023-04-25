#include <stdlib.h>
#include "main.h"
/**
 * create_array - this fx. creates an array of chars and
 * initialises it with a specific char
 * @size: the size of the array
 * @c: the character that initialises the array
 * Return: a pointer to the array, NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int j;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (array == NULL)
		return (NULL);
	/* loop to allocate char c to all array slots*/
	for (j = 0; j < size; j++)
		array[j] = c;

	return (array);
}
