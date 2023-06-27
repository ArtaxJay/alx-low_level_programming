#include <stdio.h>

/**
 * _strlen - lorem
 * @str: ipsum
 * Return: dolor
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
