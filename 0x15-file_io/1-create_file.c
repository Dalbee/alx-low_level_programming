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
	ssize_t num_bytes_written = 0;

	if (!filename)
	/**filename==NULL*/
		return (-1);
	my_file = open(filename, O_WRONLY);
	if (!my_file)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[num_bytes_written] != '\0')
			num_bytes_written++;
		if (write(my_file, text_content, num_bytes_written)
				!= num_bytes_written)
		{
			close(my_file);
			return (-1);
		}
	}
	close(my_file);
	return (1);
}
