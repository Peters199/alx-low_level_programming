#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 1)
{
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
printf("Error\n");
return (1);
}
