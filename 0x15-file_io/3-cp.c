#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define buff_SIZE 1024

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int source_file, dest_file, ret;
	ssize_t no_bytes_read, no_bytes_written;
	char buff[buffer_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	dest_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source_file);
		return (99);
	}

	while ((no_bytes_read = read(source_file, buff, buffer_SIZE)) > 0)
	{
		no_bytes_written = write(dest_file, buff, no_bytes_read);
		if (no_bytes_written == -1 || no_bytes_written != no_bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(source_file);
			close(dest_file);
			return (99);
			}
	}

	if (no_bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(source_file);
		close(dest_file);
		return (98);
	}

	ret = 0;

	if (close(source_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		ret = 100;
	}

	if (close(dest_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_file);
		ret = 100;
	}

	return (ret);
}
