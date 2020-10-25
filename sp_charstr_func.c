#include "holberton.h"

/**
 * print_c - Prints a character.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int add_c(va_list l, char *buffer, int i)
{
	char c = va_arg(l, int);

	buffer[i] = c;

	return (1);
}

/**
 * print_s - Prints a string.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int add_s(va_list l, char *buffer, int i)
{
	char *str = va_arg(l, char *);
	int j;

	if (!str)
		str = "(nil)";

	j = 0;
	while(str[j])
	{
		printf("j: %d\n", j);
		buffer[i + j] = str[j];
		j++;
	}
	return (j);
}
