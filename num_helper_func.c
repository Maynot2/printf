#include "holberton.h"

/**
 * numlen - Gives the number of digits in a number.
 * @n: A number as an integer.
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
