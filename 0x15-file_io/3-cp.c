#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
/**
 * close_f - checks for closing errors
 * @fd: file descriptor to close
 * Return: 100 if there's an error and 0 if successfully closed
 */
int close_f(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}
/**
 * main - copies the content of a file to another file
 * Return: always 0
 * @argc: number of arguments it takes
 * @argv: array of arguments
 */
int main(int argc, char **argv)
{
	int fd_r, fd_w, num_r, num_w;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fd_w == -1)
	{
		if (errno == EEXIST)
			fd_w = open(argv[2], O_WRONLY | O_TRUNC);
		else
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close_f(fd_r);
			exit(99);
		}
	}
	while ((num_r = read(fd_r, buffer, 1024)) > 0)
	{
		if (num_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close_f(fd_r);
			close_f(fd_w);
			exit(98);
		}
		num_w = write(fd_w, buffer, num_r);
		if (num_w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_f(fd_r);
	close_f(fd_w);
	return (0);
}
