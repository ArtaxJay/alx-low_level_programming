#include "main.h"


/**
 * get_bit - get_bit is function name
 * @n: arg to store passed values to the function
 * @index: arg to store index for the function
 * Return: tangible value returned
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);

}
