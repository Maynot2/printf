#include "holberton.h"

/**
  * numlen - Gives the number of digits in a number.
  * @n: A number as an integer.
  *
  * Return: The number of digit as an integer.
  *
  */

int numlen(int n)
{
	if (n / 10 == 0)
		return (1);
	return (1 + numlen(n / 10));
}

/**
  * _pow - Computes the power of a number n to exp.
  * @n: A number as an integer.
  * @exp: The exponential as an integer.
  *
  * Return: The power of a number as an integer.
  *
  */

int _pow(int n, int  exp)
{
	double total = 1;
	double i;

	for (i = 0; i < exp; i++)
		total *= n;

	return (total);
}

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
