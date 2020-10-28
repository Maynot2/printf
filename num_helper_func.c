#include "holberton.h"

/**
  * convert_to_base - convert a number to any given base.
  * @num: The number to be converted.
  * @base: The base used for the convertion.
  * @maj: If the base should be in maj
  *
  * Return: A pointer to the converted string.
  *
  */

char *convert_to_base(long int num, int base, int maj)
{
	char encodeup[] = "0123456789ABCDEF";
	char encodelow[] = "0123456789abcdef";
	int len;

	char *convertion_ptr;

	len = numlen(num, base) + 1;
	convertion_ptr = malloc(len * sizeof(char));
	if (!convertion_ptr)
		return (NULL);

	*(convertion_ptr + len) = '\0';
	convertion_ptr += len;

	do	{
		if (maj)
		{
			*(--convertion_ptr) = encodeup[num % base];
			num /= base;
		}
		else
		{
			*(--convertion_ptr) = encodelow[num % base];
			num /= base;
		}
	} while (num != 0);

	return (convertion_ptr);
}

/**
 * numlen - Gives the number of digits in a number.
 * @n: A number as an integer.
 * Return: The number of digit as an integer.
 *
 */

int numlen(int n, int base)
{
	if (n / base == 0)
		return (1);
	return (1 + numlen(n / base, base));
}

/**
 * _pow - Computes the power of a number n to exp.
 * @n: A number as an integer.
 * @exp: The exponential as an integer.
 *
 * Return: The power of a number as an integer.
 *
 *
 */

int _pow(int n, int  exp)
{
	int total = 1;
	int i;

	for (i = 0; i < exp; i++)
		total *= n;

	return (total);
}
