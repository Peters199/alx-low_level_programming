#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: The char to print
 *
 * Return: On success1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

