#include "main.h"
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1)
	{
		if (errno == EEXIST)
			return (1);
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		num_w = write(fd, text_content, len);
	}

	if (len != num_w || close(fd) == -1)
		return (-1);
	return (1);
}
