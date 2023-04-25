#include <stdlib.h>
#include "main.h"
/**
 * str_concat - a fx. that concatenates two strings
 * @s1: the first string parameter
 * @s2: the Second string parameter
 * Return: the pointer to the concatenated string(Success)
 * NULL if empty string(failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated_str;
	unsigned int j = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	concatenated_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated_str == NULL)
		return (NULL);

	j = 0;
	k = 0;

	if (s1)
	{
		while (j < len1)
		{
			concatenated_str[j] = s1[j];
			j++;
		}
	}

	if (s2)
	{
		while (j < (len1 + len2))
		{
			concatenated_str[j] = s2[k];
			j++;
			k++;
		}
	}
	concatenated_str[j] = '\0';
	return (concatenated_str);
}
