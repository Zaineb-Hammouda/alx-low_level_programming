#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * Return: number of letter it could read and print
 * @filename: name of the file to read from
 * @letters: number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_w, num_r;
	int fd_to_read;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd_to_read = open(filename, O_RDONLY);
	if (fd_to_read == -1)
	{
		free(buffer);
		return (0);
	}
	num_r = read(fd_to_read, buffer, letters);
	if (num_r == -1)
	{
		free(buffer);
		close(fd_to_read);
		return (0);
	}
	num_w = write(STDOUT_FILENO, buffer, num_r);

	free(buffer);
	close(fd_to_read);
	if (num_r != num_w)
		return (0);
	return (num_w);
}
