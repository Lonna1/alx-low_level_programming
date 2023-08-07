#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file -function that appends text at the end of a file
 * @filename: pointer of path to file
 * @text_content: pointer of the content
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int df;
	ssize_t _write;
	int size;

	if (!filename)
		return (-1);

	df = open(filename, O_WRONLY | O_APPEND);

	if (df == -1)
		return (-1);

	if (!text_content)
	{
		close(df);
		return (1);
	}

	size = _strlen(text_content);
	_write = write(df, text_content, size);

	if (_write == -1)
	{
		close(df);
		return (-1);
	}
	close(df);
	return (1);
}

/**
 * _strlen - furnction for string length
 * @s:a pointer to a character
 * Return: 0 success
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
