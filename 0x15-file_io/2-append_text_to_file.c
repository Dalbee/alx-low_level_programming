#include "main.h"

/**
 * append_text_to_file - a function that appends
 * a text string to an existing file
 * @filename: the name of the file to append to
 * @text_content: the text string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int my_file;
	int len = 0;
	int num_bytes_written;

	if (!filename)
		return (-1);
	my_file = open(filename, O_WRONLY | O_APPEND);
	if (!my_file)
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

