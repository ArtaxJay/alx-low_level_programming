#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_buffer - create clip storage
 * @file: file in buffer
 * Return: return statment
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
	dprintf(STDERR_FILENO,

	"Error: Can't write to %s\n", file);

	exit(99);
	}

	return (buf);
}


/**
 * close_file - If file is open, this function closes it
 * @fd: function arg
 */

void close_file(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	exit(100);
	}
}


/**
 * main - Main func in this file
 * @argc: first arg to the main func
 * @argv: arg two to the main func
 * Return: return value
 * Description: description for what the func does
 */


int main(int argc, char *argv[])
{
	int from;
	int to;
	int rd;
	int wd;

	char *buffer;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");

	exit(97);
	}

	buffer = create_buffer(argv[2]);

	from = open(argv[1], O_RDONLY);

	rd = read(from, buffer, 1024);

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (from == -1 || rd == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);

	free(buffer);

	exit(98);
	}

	wd = write(to, buffer, rd);
	if (to == -1 || wd == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);

	free(buffer);

	exit(99);
	}

	rd = read(from, buffer, 1024);

	to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);

	close_file(from);

	close_file(to);

	return (0);
}
