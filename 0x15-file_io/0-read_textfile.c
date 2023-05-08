#include "main.h"

/**
 * read_textfile - reads text from a file and prints it to POSIX stdout
 * similar to 'cat' command on linux
 * Return: the num of letters it read and printed or 0 if error
 * @filename: name of the file to read
 * @letters: num of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_w, num_r;
	int fd_read;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd_read = open(filename, O_RDONLY);
	if (fd_read == -1)
	{
		free(buffer);
		return (0);
	}

	num_r = read(fd_read, buffer, letters);
	if (num_r == -1)
	{
		free(buffer);
		close(fd_read);
		return (0);
	}
	num_w = write(STDOUT_FILENO, buffer, num_r);

	free(buffer);
	close(fd_read);
	if (num_r != num_w)
		return (0);

	return (num_r);
}
