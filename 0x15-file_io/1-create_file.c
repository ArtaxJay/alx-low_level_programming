#include "main.h"


/**
 * create_file - this creates files
 * @filename: to be file-name
 * @text_content: file content
 * Return: value returned
 */


int create_file(const char *filename, char *text_content)
{
	int fid;
	int wt;
	int len = 0;

	if (filename == NULL)
	{
	return (-1);
	}

	if (text_content != NULL)
	{

	for (len = 0; text_content[len];)
	{
	len++;
	}

	}

	fid = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wt = write(fid, text_content, len);

	if (fid == -1 || wt == -1)
	{
	return (-1);
	}

	close(fid);

	return (1);

}
