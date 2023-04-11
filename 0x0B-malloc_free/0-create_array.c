#include "holberton.h"
#include <stdlib.h>

/**
<<<<<<< HEAD
 * *create_array - creaates an array of chars, and initializes
=======
 * *create_array - creates an array of chars, and initializes
>>>>>>> c1f51b12dd1951cbd1c94258380e6c18d87187a3
 * it with a specific char.
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: a pointer to the array or null if it fails
 */
<<<<<<< HEAD
char *creaate_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
			return (NULL);
			while (size--)
			array[size] = c;
			return (array);
=======
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
		if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
>>>>>>> c1f51b12dd1951cbd1c94258380e6c18d87187a3
}
