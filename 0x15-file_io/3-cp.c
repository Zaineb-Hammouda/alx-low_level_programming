#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - copies the content of a file to another file
 * Return: always 0
 * @argc: number of arguments it takes
 * @argv: array of arguments
 */
int main(int argc, char **argv)
{
	int fd_r, fd_w, num_r, num_w, len;
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
	fd_r = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (fd_r == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (num_r = read(fd_r, buffer, 1024) > 0)
		write(fd_w, buffer, 1024);
	if (close(fd_r) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_r);
		exit(100);
	}
	else if (close(fd_w) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_w);
		exit(100);
	}
	return (0);
}
