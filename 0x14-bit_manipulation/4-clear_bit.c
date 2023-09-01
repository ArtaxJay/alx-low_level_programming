#include "main.h"


/**
 * clear_bit - this is clear_bit funct
 * @n: pointer arg to clear_bit
 * @index: unsigned index for clear_bit
 * Return: always 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
