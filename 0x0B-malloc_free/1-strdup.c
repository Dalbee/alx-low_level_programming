#include <stdlib.h>
#include "main.h"
/**
 * _strdup - A fx. that returns a pointer to anewly allocated
 * space in memory which contains a copy of the
 * string given as a parameter
 * @str: the string to be newly allocated in memory
 * Return: NULL if string is empty or insufficient memory
 * a pointer to the duplicated string (Success)
 */
char *_strdup(char *str)
{
	char *duplicated_string;
	unsigned int j, len;

	j = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicated_string = malloc(sizeof(char) * (len + 1));

	if (duplicated_string == NULL)
		return (NULL);

	while ((duplicated_string[j] = str[j]) != '\0')
		j++;

	return (duplicated_string);
}
