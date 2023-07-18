#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letter: number of letters it should read and print
 * Return: Actual number of letters it could read and print
 * filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o < 0)
	{
		free(buffer);
		close(0);
		return (0);
	}
	r = read(o, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		close(0);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);

       if (w == -1 || w != r)
	{
		free(buffer);
		close(0);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
