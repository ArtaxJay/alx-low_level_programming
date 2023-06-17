#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main -  betty style doc for function main goes there
 * Return: always (success)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("%i is positive\n", n);
	else if (n < 0)
	printf("%i is negative\n", n);
	else
	printf("%i is zero\n", n);
	}
	return (0);
}
