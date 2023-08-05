#include "main.h"


/**
 * clear_bit - dolor
 * @n: lorem
 * @index: sit amet
 * Return: ipsum
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
	{
	return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);

}
