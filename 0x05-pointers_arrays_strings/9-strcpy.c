#include "main.h"
#include <stdio.h>

/**
 * _strcpy - lorem
 * @dest: ipsum
 * @src: dolor
 * Return: sit
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';
	return (dest);
}
