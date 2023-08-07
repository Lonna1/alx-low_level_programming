#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
#define BUF_SIZE 1024

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - Entry of the program
 * @argc: num of arguments
 * @argv: pointer to the array of arguments
 * Return: 0 for program successfulness
 */
int main(int argc, char **argv)
{
	int src, dest, on_close, _write, _read;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		_read = read(src, buffer, 1024);
		if (_read == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (_read > 0)
		{
			_write = write(dest, buffer, _read);
			if (_write == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	on_close = close(src);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	on_close = close(dest);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
