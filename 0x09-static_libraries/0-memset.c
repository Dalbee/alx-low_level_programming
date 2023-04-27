#include "main.h"
/**
 * *_memset - a fx. that fills memory with a constant byte
 * @s: the area to be filled
 * @b: the constant to be filled
 * @n: the number of bytes of s to be filled
 * Return: the pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	char *memory = s;
	unsigned int value = b;

	for (j = 0; j < n; j++)
	{
		memory[j] = value;
	}
	return (memory);
}
