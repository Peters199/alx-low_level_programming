#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * check-num - check - string there are digit
 * @str: array str
 *
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;
	count = 0;

	while (count < strlen(str))
	/*count string*/
{
	if (!sdigit(str[count])) /*check if str there are digit*/
	{
		return (0);
	}
	count++;
}
return (1);
}
/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;
	count = 1

		while (count < argc) /*Go through the whole array*/
		{
			if (check_num(argc[count]))
			{
				str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
				sum += str_to_int;
			}
			/*Condition if one of the num contains symbols that are not digit*/
			else
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
