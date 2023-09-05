#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - The function reads input from files
 * @filename: memory location to store the input
 * @letters: second argument to the func
 * Return: returned value by the read function
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;

	ssize_t fid;

	ssize_t wt;

	ssize_t tp;

	fid = open(filename, O_RDONLY);

	if (fid == -1)
	{
	return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	tp = read(fid, buffer, letters);

	wt = write(STDOUT_FILENO, buffer, tp);

	free(buffer);

	close(fid);


	return (wt);

}
