#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: File to append text to
 * @text_content: text to be appended to file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + text_len) != '\0')
			text_len++;
	}

	o = open(filename, O_RDWR);
	w = write(o, text_content, text_len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
