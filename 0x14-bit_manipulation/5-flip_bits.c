#include "main.h"


/**
 * flip_bits - he flip_bits funct decla
 * @m: args one to flip_bits
 * @n: args two to flip_bits
 * Return: returns
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	int counter = 0;

	unsigned long int cur_val;

	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	cur_val = exclusive >> i;

	if (cur_val & 1)
		counter++;
	}

	return (counter);
}
