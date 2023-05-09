#include "main.h"
/**
 * exit_error - writes an error msg to stderr and exits accordingly
 * @argv: array of arguments
 * @n: the argument number
 */
void exit_error(char **argv, int n)
{
	if (n == 0)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (n == 1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (n == 2)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * close_file - checks for errors and closes file descriptor
 * @fd: file descriptor to close
 * Return: 100 if error, 0 if success
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}
/**
 * main - copies content of a file to another
 * Return: 0 if success
 *
 * @argc: number of arguments it takes
 * @argv: array of args
 */
int main(int argc, char **argv)
{
	int fd_r, fd_w, num_r, num_w;
	char *buffer[1024];

	if (argc != 3)
		exit_error(argv, 0);
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r == -1)
		exit_error(argv, 1);
	fd_w = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fd_w == -1)
	{
		if (errno == EEXIST)
			fd_w = open(argv[2], O_WRONLY | O_TRUNC);
		else
		{
			close_file(fd_r);
			exit_error(argv, 2);
		}
	}
	while ((num_r = read(fd_r, buffer, 1024)) > 0)
	{
		if (num_r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			close_file(fd_r);
			close_file(fd_w);
			exit(98);
		}
		num_w = write(fd_w, buffer, num_r);
		if (num_w == -1)
			exit_error(argv, 2);
	}
	close_file(fd_r);
	close_file(fd_w);
	return (0);
}
