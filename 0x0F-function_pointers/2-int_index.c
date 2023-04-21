#include "function_pointers.h"
/**
* int_index - fx. that returns the index place if comparison = true, else -1
* @array: the array
* @size: the size of elements in array
* @cmp: the pointer to func to be used compare values
* Return: index (j), -1 if size <=0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int j;


if (array == NULL || size <= 0 || cmp == NULL)
return (-1);


for (j = 0; j < size; j++)
{
if (cmp(array[j]))
return (j);
}
return (-1);
}
