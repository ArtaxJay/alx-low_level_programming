#include "main.h"

/**
 * _puts - lorem
 * @str: ipsum
 * Return: sit amet
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
