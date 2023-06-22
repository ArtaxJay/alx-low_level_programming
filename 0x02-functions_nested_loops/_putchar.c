#include <unistd.h>

/**
 * _putchar - lorem ipsum
 * @c: dolor sit
 * Return: amet consectetur
 * On error, -1 is returned and errno is set apprpximately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
