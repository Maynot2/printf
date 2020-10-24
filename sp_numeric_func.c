#include "holberton.h"

/**
 * print_number - Print a number n1
 * @n: An integer
 *
 * Return: Void
 *
 */

int print_num(int n, int c)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10)
	{
		return print_num(n1 / 10, c + 1);
	}
	_putchar(n1 % 10 + '0');
}


/**
 * print_d_i - Print a decimal
 * @l: A list of elements.
 *
 * Return: int
 */

int print_d_i(va_list l)
{
	int num = va_arg(l, int);
	int c = 0;

	return (print_num(num, c));
}
