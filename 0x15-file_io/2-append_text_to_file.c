#include "main.h"


/**
 * append_text_to_file - adds some txt to files
 * @filename: file to append to
 * @text_content: txt to append
 * Return: function return value
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int oi;
	int wr;
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

	oi = open(filename, O_WRONLY | O_APPEND);

	wr = write(oi, text_content, len);

	if (oi == -1 || wr == -1)
	{
	return (-1);
	}

	close(oi);

	return (1);

}
