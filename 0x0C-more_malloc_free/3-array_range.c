#include "main.h"

/**
 * array_range - This is a fxn that creates an array of integers.
 * @min: the minimum value
 * @max: the maximum value
 *
 * Description:
 * The array created should contain all the values from min (included) to max
 * (included), ordered from min to max
 * - If min > max, return NULL
 * - If malloc fails, return NULL
 *
 * Return: range, the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *range;
	int j, k;

	if (min > max)
		return (NULL);

	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	k = min;
	for (j = 0; j < (max - min + 1); j++)
	{
		range[j] = k;
		k++;
	}
	return (range);
}
