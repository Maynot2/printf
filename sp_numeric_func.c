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

int _pow(int n, int exp)
{
	int total = 1;
	int i;

	for (i = 0; i < exp; i++)
		total *= n;

	return (total);
}

/**
 * print_d_i - Print a decimal
 * @l: A list of elements.
 *
 * Return: int
 */

int print_d_i(va_list l)
{
	int n = va_arg(l, int);
	unsigned int num = n;
	int i;

	if (n < 0)
	{
		_putchar('-');
		num = -n;

	}


	for (i = numlen(num) - 1; i > 0; i--)
	{
		_putchar((num / _pow(10, i)) + '0');
		num -=  (num / _pow(10, i)) * _pow(10, i);
	}
	_putchar(num % 10 + '0');

	return (numlen(num));
}
