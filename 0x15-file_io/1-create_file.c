#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: content to write to filename
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, text_len = 0;

	if (filename == NULL)
		return (-1);

	while (*(text_content + text_len) != '\0')
		text_len++;

	if (text_content == NULL)
		text_len = 0;

	o = open(filename, O_CREAT | O_WRONLY, 0600);
	w = write(o, text_content, text_len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);
	return (1);
}
