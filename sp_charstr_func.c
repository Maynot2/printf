#include "holberton.h"

/**
 * add_c - Prints a character.
 * @l: A list of elements.*
 * @buffer: A string buffer.
 * @i: The current position in the buffer.
 *
 * Return: 1 as per one character added.
 *
 */

int add_c(va_list l, char *buffer, int i)
{
	char c = va_arg(l, int);

	buffer[i] = c;

	return (1);
}

/**
 * add_s - Add a string to a given buffer.
 * @l: A list of elements.
 * @buffer: A string buffer.
 * @i: The current position in the buffer.
 *
 * Return: The number of characters added.
 *
 */

int add_s(va_list l, char *buffer, int i)
{
	char *str = va_arg(l, char *);
	int j;

	if (!str)
		str = "(null)";

	j = 0;
	while (str[j])
	{
		buffer[i + j] = str[j];
		j++;
	}
	return (j);
}
/**
 * add_percent - Add a percent
 *
 *
 *
 *
 */

int add_percent(va_list l, char *buffer, int i)
{
	(void)l;

	buffer[i] = '%';
	return (1);
}
