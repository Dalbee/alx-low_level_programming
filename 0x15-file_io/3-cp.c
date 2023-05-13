#include "main.h"
#include <stdio.h>

/**
 * error_file - a function that checks if files can be opened.
 * @source_file: source_file.
 * @dest_file: dest_file.
 * @argv: the arguments vector.
 * Return: no return.
 */
void error_file(int source_file, int dest_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - the program used to examine the code.
 * @argc: the number of arguments.
 * @argv: the arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_file, dest_file, err_cl;
	ssize_t no_char_r, no_char_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	dest_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(source_file, dest_file, argv);

	no_char_r = 1024;
	while (no_char_r == 1024)
	{
		no_char_r = read(source_file, buffer, 1024);
		if (no_char_r == -1)
			error_file(-1, 0, argv);
		no_char_wr = write(dest_file, buffer, no_char_r);
		if (no_char_wr == -1)
			error_file(0, -1, argv);
	}

	err_cl = close(source_file);
	if (err_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	err_cl = close(dest_file);
	if (err_cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	return (0);
}
