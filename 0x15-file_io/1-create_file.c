#include "main.h"

/**
 * create_file - a fxn. that creates a file and writes text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int my_file;
	int len = 0;
	int num_bytes_written;

	if (!filename)
		return (-1);

	my_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if(!my_file)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	num_bytes_written = write(my_file, text_content, len);

	if (num_bytes_written == -1)
		return (-1);

	close(my_file);

	return (1);
}
