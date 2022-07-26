#include "main.h"

/**
 * read_textfile - Function to read a text file and prints it to the standard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY); /* File Descriptor */
	r = read(o, buf, letters); /* Read content of filename into buffer */
	w = write(STDOUT_FILENO, buf, r); /* Print to Standard output */

	if (o == -1 || r = -1 || w = -1 || w != r) /* Check for any errors */
	{
		free(buf);
		return (0);
	}


	free(buf);
	return (w);
}
