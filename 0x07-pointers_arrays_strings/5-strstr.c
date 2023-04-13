#include "main.h"
/**
 * _strstr - Entry point. fxn finds a substr in 1st var similar to 2nd var
 * @haystack: input variable
 * @needle: input variable
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *q = haystack;
		char *r = needle;

		while (*q == *r && *r != '\0')
		{
			q++;
			r++;
		}

		if (*r == '\0')
			return (haystack);
	}

	return (0);
}
