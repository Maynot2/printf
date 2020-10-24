#include "holberton.h"

int print_num(int nb, int c)
{
        if (nb / 10 == 0)
                return (c);
	putchar(nb + '0');
	print_num(nb / 10, c);
}

/**
 * print_d_i - Print a decimal
 * @l: A list of elements.
 *
 * Return: int
 */

int print_d_i(va_list l)
{
	int nb = va_arg(l, int);
	int c;

	print_num(nb);
	return (va_arg(l, int));
}
