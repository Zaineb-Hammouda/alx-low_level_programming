#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append to
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		num_w = write(fd, text_content, len);
		if (num_w == -1)
		{
			close(fd);
			return (-1);
		}
	}
	else
		return (-1);
	return (1);
}
