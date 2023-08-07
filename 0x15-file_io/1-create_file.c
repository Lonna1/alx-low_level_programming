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
	int df, result = 1, countn = 0;

	if (!filename)
	{
		return (-1);
	}
	df = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (df == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[countn])
			countn++;
		result = write(df, text_content, countn);
	}
	if (result == -1)
	{
		return (-1);
		close(df);
	}
	return(1);
}
