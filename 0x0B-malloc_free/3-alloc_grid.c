#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - a fx. that creates a two dimensional array of ints
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: a pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array; /** 2-dimensional array*/
	int j, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		array[j] = (int *) malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			free(array);
			for (k = 0; k <= j; k++)
				free(array[k]);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}
