#include "main.h"

/**
 * print_binary - function decla
 * @n: function arg
 */

void print_binary(unsigned long int n)

{
	int count = 0;

	unsigned long int current;

	int j;

	for (j = 63; j >= 0; j--)
	{
		current = n >> j;

		if (current & 1)
		{
		_putchar('1');
		count++;
		}

		else if (count)
		{
		_putchar('0');
		}
	}

	if (!count)
	{
	_putchar('0');
	}
}
