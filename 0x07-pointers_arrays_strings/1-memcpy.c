#include "main.h"
/**
 *_memcpy - This is a fxn that copies a memory area
 *@dest: pointer to the destination memory 
 *@src: pointer to the source memory
 *@n: The number of bytes
 *
 *Return: copied memory with n byte modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
