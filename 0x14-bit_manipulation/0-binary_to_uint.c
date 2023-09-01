#include "main.h"

/**
 * binary_to_uint - A function with one parameter
 * @b: parameter to the function
 * Return: function return value
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int deci_val = 0;

	int i;

	if (!b)
	{
	return (0);
	}

	for (i = 0; b[i]; i++)
	{

		if (b[i] < '0' || b[i] > '1')
		{
		return (0);
		}

		deci_val = 2 * deci_val + (b[i] - '0');

	}

	return (deci_val);
}
