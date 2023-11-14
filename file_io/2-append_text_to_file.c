#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		letters = write(fd, text_content, strlen(text_content));
		if (letters == -1)
		{
			close(fd);
			return (-1);
		}
	}

	rwr = close(fd);
	if (rwr == -1)
		return (-1);

	return (1);
}			
