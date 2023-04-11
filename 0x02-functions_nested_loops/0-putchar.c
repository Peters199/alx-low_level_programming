<<<<<<< HEAD
nclude "main.h"

/**
 * main - Prints Holberton as a message.
=======
#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
>>>>>>> dfd05e969ff6b31468a4ef79a416714fb2fb7c4d
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
		int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
		int count, sz;

		sz = sizeof(str) / sizeof(int);
		for (count = 0; count < sz; count++)
		{
			_putchar(str[count]);
		}
		_putchar('\n');
		return (0);
=======
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
>>>>>>> dfd05e969ff6b31468a4ef79a416714fb2fb7c4d
}
