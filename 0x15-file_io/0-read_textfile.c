#include <main.h>

/**
 * read_textfile - a fucntion that reads a text file and prints 
 * its contents to the standard output
 * @filename: the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the number of letters read and printed, or 0 otherwise (if it fails)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *my_file;
    char *my_buffer;
    ssize_t num_bytes_read, num_bytes_written;

    if (!filename)
        return (0);

    my_file = fopen(filename, O_RDONLY);
    if (my_file == -1)/**my_file==NULL*/
        return (0);

    my_buffer = malloc(sizeof(char) * letters);
    if (!my_buffer)/**my_buffer==NULL*/
    {
        close(my_file);
        return (0);
    }

    num_bytes_read = read(my_file, my_buffer, letters);
    num_bytes_written = write(STDOUT_FILENO,my_buffer, num_bytes_read);

    free(my_buffer);
    close(my_file);

    if (num_bytes_read != num_bytes_written)
        return (0);

    return (num_bytes_written);
}
