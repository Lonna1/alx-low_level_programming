#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - function that reads and prints from a file
 * @filename: pointer of path to file
 * @letters: characters to be read and printed
 * Return: letter numbers
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int df;
	char *buffer;
	ssize_t _read, _write;

	if (!filename)
		return (0);
	df = open(filename, O_RDONLY);
	if (df == -1)
	{
		close(df);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(df);
		return (0);
	}

	_read = read(df, buffer, letters);

	if (_read == -1)
	{
		free(buffer);
		close(df);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);

	if (_write == -1)
	{
		free(buffer);
		close(df);
		return (0);
	}
	close(df);
	return (_read);
}
