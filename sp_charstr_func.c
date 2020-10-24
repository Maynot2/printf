#include "holberton.h"

/**
 * print_c - Prints a character.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int print_c(va_list l)
{
	_putchar(va_arg(l, int));
	return (1);
}

/**
 * print_s - Prints a string.
 * @l: A list of elements.
 *
 * Return: Nothing.
 *
 */

int print_s(va_list l)
{
	char *str = va_arg(l, char *);
	int c;

	if (str)
		c = print(str);
	else
		c = print("(nil)");
	return (c);
}
