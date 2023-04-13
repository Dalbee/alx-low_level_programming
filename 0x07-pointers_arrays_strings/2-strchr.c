#include "main.h"
/**
 * _strchr - Entry point. This fxn locates a first occurence of a char in a str
 * @s: Pointer input variable
 * @c: Input variable
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
