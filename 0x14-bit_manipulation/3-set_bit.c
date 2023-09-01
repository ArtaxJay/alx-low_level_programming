#include "main.h"


/**
 * set_bit - this function sets bit vals
 * @n: args one to set_bit function decla
 * @index: args two to set_bit function decla
 * Return: set_bit return value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
