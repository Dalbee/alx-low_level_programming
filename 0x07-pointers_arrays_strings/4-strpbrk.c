#include "main.h"
/**
 * _strpbrk - Entry pt. fxn finds the 1st occurence in str s that is as accept
 * @s: input variable
 * @accept: input variable
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int a; /** index*/

		while (*s)
		{
			for (a = 0; accept[a]; a++)
			{
			if (*s == accept[a])
			return (s);
			}
		s++;
		}

	return ('\0');
}
