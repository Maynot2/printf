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
	int n = va_arg(l, int);
	unsigned int num = n;
	int j;

	if (n < 0)
	{
		buffer[i] = ('-');
		num = -n;
		i++;
	}

	for (j = 0; j < numlen(n); j++)
	{
		buffer[i + j] = (num / _pow(10, numlen(num) - 1)) + '0';
		num -= (num / _pow(10, numlen(num) - 1)) * _pow(10, numlen(num) - 1);
	}

	return (n < 0 ? numlen(n) + 1 : numlen(n));
}

/**
 * count_div_by - Count number of times, n is divided by a given number div
 * @n: the number to be divided as an integer
 * @div: the divisor
 * @c: the count
 *
 * Return: the count
 */

int count_div_by(int n, int div, int c)
{
	if (n !=  0)
		return (count_div_by(n / div, div, c + 1));
	return (c);
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
	int cc = 0;
	int j = count_div_by(num, 2, 0) - 1;

	while (j >= 0)
	{
		if (num % 2 == 0)
		{
			buffer[i + j] = '0';
		}
		else
		{
			buffer[i + j] = '1';
		}
		num /= 2;
		j--;
		cc++;
	}

	return (cc);
}
