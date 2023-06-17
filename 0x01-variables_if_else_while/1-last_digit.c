#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - betty style doc for function main goes there
* Return: Always(success)
*/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;

	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
	{
		printf("greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
