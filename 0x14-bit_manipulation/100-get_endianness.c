#include "main.h"


/**
 * get_endianness - lorem ipsum
 * Return: dolir sit amet
 */


int get_endianness(void)

{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);
}
