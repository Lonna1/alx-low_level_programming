#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer of path to the file
 * @text_content: pointer to the content chars
 * Return: characters to be read
 */

int create_file(const char *filename, char *text_content)
{
	int df;
	ssize_t _write;
	int size;
	char *mem;

	if (!filename)
	{
		return (-1);
	}
	df = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (df == -1)
		return (-1);
	if (!text_content)
	{
		close(df);
		return (1);
	}
	size = _strlen(text_content);
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(df);
		return (-1);
	}
	_write = write(df, text_content, size);
	if (_write == -1)
	{
		close(df);
		free(mem);
		return (-1);
	}
	close(df);
	free(mem);
	return (1);
}

/**
 * _strlen - string length function
 * @s: a pointer to a character
 * Return: 0 for the program successfulness
 */

int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	return (x);
}
