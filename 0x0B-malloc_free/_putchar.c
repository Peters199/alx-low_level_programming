#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the char c to stdout 
 * @c: the char to print
 *
 * Return: On success 1.
 * On erroR, -1 is return, and is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &C, 1));
}
