#include "main.h"


/**
 * get_endianness - function identifier
 * Return: returns a value of type integer
 */


int get_endianness(void)

{
	unsigned int integer = 1;

	char *ch = (char *) &integer;

	return (*ch);
}
