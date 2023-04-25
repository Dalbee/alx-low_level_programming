#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a fx. that concatenates all arguments of my program to a string
 * the command line arguments are concatenated
 * @ac: the number of of args
 * @av: the args
 * Return: concatenated_str
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	concatenated_str = malloc(sizeof(char) * size + 1);

	if (concatenated_str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			concatenated_str[index++] = av[arg][byte];

		concatenated_str[index++] = '\n';
	}
	concatenated_str[size] = '\0';
	return (concatenated_str);
}
