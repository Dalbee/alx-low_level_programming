#include "main.h"
/**
 * _strncat - This fxn. concatenates two strings
 * @dest: the destination parameter
 * @src: the source parameter
 * @n: the limit of the concatenation
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /**Index*/
	int dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
