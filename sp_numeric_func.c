#include "holberton.h"

/**
 * add_d_i - Add a decimal char to a buffer.
 * @l: A list of elements.
 * @buffer: A string buffer.
 * @i: the current position of the buffer.
 *
 * Return: int
 */

int add_d_i(va_list l, char *buffer, int i)
{

	int num = va_arg(l, int);
	unsigned int numcp = num;
	char *converted;
	int j = 0;

	if (num < 0)
	{
		buffer[i] = ('-');
		numcp = -num;
		i++;
	}

	converted = convert_to_base(numcp, 10, 0);

	while (converted[j])
	{
		buffer[i + j] = converted[j];
		j++;
	}

	return ((num < 0) ? (j + 1) : j);
}


/**
 * add_oct - Convert integer into an octal
 * @l: the argument list
 * @buffer: the buffer
 * @i: the index
 *
 * Return: the number of caracter
 */

int add_oct(va_list l, char *buffer, int i)
{
	int num = va_arg(l, int);
	char *converted = convert_to_base(num, 8, 0);
	int j = 0;

	while (converted[j])
	{
		buffer[i + j] = converted[j];
		j++;
	}

	return (j);
}

/**
 * add_binary - Convert integer into a binary and add it to the buffer
 * @l: the argument list
 * @buffer: the buffer
 * @i: the index
 *
 * Return: the number of added characters
 */

int add_binary(va_list l, char *buffer, int i)
{
	unsigned int num = va_arg(l, unsigned int);
	char *converted = convert_to_base(num, 2, 0);
	int j = 0;

	while (converted[j])
	{
		buffer[i + j] = converted[j];
		j++;
	}
	return (j);
}

/**
 * add_hex_low - Convert integer into a lower hexadecimal
 * @l: the argument list
 * @buffer: the buffer
 * @i: the index
 *
 * Return: the number of added characters.
 */

int add_hex_low(va_list l, char *buffer, int i)
{
	unsigned int num = va_arg(l, unsigned int);
	char *converted = convert_to_base(num, 16, 0);
	int j = 0;

	while (converted[j])
	{
		buffer[i + j] = converted[j];
		j++;
	}
	return (j);
}

/**
 * add_hex_up - convert integer into a upper hexadecimal
 * @l: the argument list
 * @buffer: the buffer
 * @i: the index
 *
 * Return: the number of added characters.
 */

int add_hex_up(va_list l, char *buffer, int i)
{
	unsigned int num = va_arg(l, unsigned int);
	char *converted = convert_to_base(num, 16, 1);
	int j = 0;

	while (converted[j])
	{
		buffer[i + j] = converted[j];
		j++;
	}
	return (j);
}
